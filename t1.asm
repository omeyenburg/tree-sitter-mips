# Die Eingabewerte des Programms werden aus dem Speicher gelesen: value0 und value1
# Die Eingabewerte sowie Summe und Differenz der Eingabewerte wird in der Standardausgabe als IEEE ausgegeben.
.data

# Testwerte, die addiert und subtrahiert werden
value0:	.word	0x2538f4e5 # 0 01001010 01110001111010011100101
value1:	.word	0x2530af2a # 0 01001010 01100001010111100101010

text0:	.asciiz "a     = "
text1:	.asciiz "b     = "
text2:	.asciiz "a + b = "
text3:	.asciiz "a - b = "
endl:	.asciiz "\n"

.text
.globl main

# Liest text aus Adresse im Speicher und gibt diesen aus
.macro print_txt(%address)
	# Zwischenspeicherung von $a0 und $v0
        move $t0 $a0
	move $t1, $v0

	la $a0 %address
	li $v0 'a', 1
	syscall

	move $a0, $t0
	move $v0, $t1
.end_macro


# Gibt Dezimalzahl aus mit Zeilenumbruch
.macro print_int(%value)
	# Zwischenspeicherung von $a0 und $v0
	move $t0, $a0
	move $t1, $v0
	
	# Ausgabe des Wertes
	move $a0, %value
	li $v0, 1
	syscall
	
	# Neue Zeile
	la $a0, endl
	li $v0, 4
	syscall

	move $a0, $t0
	move $v0, $t1
.end_macro


# Gibt Binärzahl aus mit Zeilenumbruch
.macro print_bin(%value)
	# Zwischenspeicherung von $a0 und $v0
	move $t0, $a0
	move $t1, $v0
	
	# Ausgabe des Wertes
	li $t2, 32
	move $t3, %value
	loop_print_bin:
		# Ausgabe des Bits
		andi $a0, $t3, 0x80000000 # Maskiere MSB
		srl $a0, $a0, 31 # Shift, damit MSB zum LSB wird
		li $v0, 1
		syscall
	
		# Shift value nach links
		sll $t3, $t3, 1
	
	# Wiederhole Schleife (i = 32, i > 0, i--)
	subi $t2, $t2, 1
	bne $t2, $zero, loop_print_bin
	
	# Neue Zeile
	la $a0, endl
	li $v0, 4
	syscall

	move $a0, $t0
	move $v0, $t1
.end_macro


# Ausgaben:
# - $s0: Mantisse des ersten Werts
# - $s1: Mantisse des zweiten Werts
# - $s2: Exponent des ersten Werts
# - $s3: Exponent des zweiten Werts
# - $s4: Vorzeichen des ersten Werts
# - $s5: Vorzeichen des zweiten Werts
.macro load_values()
	# Konvertiere ersten Wert
	lw $a0, value0
	jal convert_from_ieee
	move $t0, $s0
	move $t1, $s1
	move $t2, $s2

	# Konvertiere zweiten Wert
	lw $a0, value1
	jal convert_from_ieee
	move $t3, $s0
	move $t4, $s1
	move $t5, $s2

	# Verschiebe Werte in richtige Register
	move $s0, $t0 # Mantisse des ersten Werts
	move $s1, $t3 # Mantisse des zweiten Werts
	move $s2, $t1 # Exponent des ersten Werts
	move $s3, $t4 # Exponent des zweiten Werts
	move $s4, $t2 # Vorzeichen des ersten Werts
	move $s5, $t5 # Vorzeichen des zweiten Werts
.end_macro


main:
	# Ausgabe des ersten Wertes
	print_txt(text0)
	lw $a0, value0
	print_bin($a0)

	# Ausgabe des zweiten Wertes
	print_txt(text1)
	lw $a0, value1
	print_bin($a0)


	# Addition

	# Lade Werte aus dem Speicher
	load_values()

	# Ausgabe des Beschreibungstextes
	print_txt(text2)

	# Addiere Zahlen
	jal add_float

	# Ausgabe des Ergebnisses der Addition in IEEE
	jal convert_to_ieee
	print_bin($v0)
	
	
	# Subtraktion
	
	# Lade Werte aus dem Speicher
	load_values()

	# Ausgabe des Beschreibungstextes
	print_txt(text3)

	# Subtrahiere Zahlen
	jal sub_float

	# Ausgabe des Ergebnisses der Addition in IEEE
	jal convert_to_ieee
	print_bin($v0)


	# Quit
	li $v0, 10
	syscall


# Eingabe:
# - $a0: IEEE-Darstellung (32-bit)
# Ausgaben:
# - $s0: Mantisse
# - $s1: Exponent
# - $s2: Vorzeichen
convert_from_ieee:
	# Mantisse
	# Maskiere relevante bits der Mantissen
	andi $s0, $a0, 0x007FFFFF # 0000 0000 0111 1111 1111 1111 1111 1111
	# Füge implizite 1 an die Mantissen an
	addi $s0, $s0, 0x00800000 # 0000 0000 1000 0000 0000 0000 0000 0000

	# Extrahiere Exponent (8 bit nach dem Vorzeichenbit)
	sll $s1, $a0, 1
	srl $s1, $s1, 24

	# Vorzeichen (vorderstes Bit)
	srl $s2, $a0, 31

	# Springe in Hauptfunktion zurück
	jr $ra


# Eingaben:
# - $s0: Mantisse
# - $s1: Exponent
# - $s2: Vorzeichen
# Ausgabe:
# - $v0: IEEE-Darstellung (32-bit)
convert_to_ieee:
	# Exponent und Vorzeichen verschieben
	sll $s1, $s1, 23
	sll $s2, $s2, 31
	
	# Zahl mit bitwise-OR zusammenfügen
	move $v0, $s0
	or $v0, $v0, $s1
	or $v0, $v0, $s2

	# Springe in Hauptfunktion zurück
	jr $ra


# Eingaben:
# - $s0: Mantisse der ersten Zahl
# - $s1: Mantisse der zweiten Zahl
# - $s2: Exponent der ersten Zahl
# - $s3: Exponent der zweiten Zahl
# - $s4: Vorzeichen der ersten Zahl
# - $s5: Vorzeichen der ersten Zahl
# Ausgaben:
# - $s0: Mantisse
# - $s1: Exponent
# - $s2: Vorzeichen
sub_float:
	# Invertiere Vorzeichen der zweiten Zahl und führe Addtion aus
	not $s5, $s5
	andi $s5, 1
	j add_float


# Eingaben:
# - $s0: Mantisse der ersten Zahl
# - $s1: Mantisse der zweiten Zahl
# - $s2: Exponent der ersten Zahl
# - $s3: Exponent der zweiten Zahl
# - $s4: Vorzeichen der ersten Zahl
# - $s5: Vorzeichen der ersten Zahl
# Ausgaben:
# - $s0: Mantisse
# - $s1: Exponent
# - $s2: Vorzeichen
add_float:
	# Zwischenspeicherung von $ra in $s7
	move $s7, $ra
	
	# Sortierung der Zahlen (ohne Beachtung des Vorzeichens, da das
	# Vorzeichen immer von der größeren Zahl übernommen werden kann)
	beq $s2, $s3, equal_exp
		# Tausche Zahlen, wenn |$s2| >= |$s3| (d.h. bezüglich der Exponenten)
		slt $t0, $s2, $s3
		bne $t0, $zero, swap_floats
		j ordered_floats
	equal_exp:
		# Tausche Zahlen, wenn |$s0| >= |$s1| (d.h. bezüglich der Mantissen)
		slt $t0, $s0, $s1
		bne $t0, $zero, swap_floats
	ordered_floats:

	# Ab hier gilt: $s2 >= $s3 und $s2 = $s3 => $s0 >= $s1
	
	# Verschiebe Mantisse der kleineren Zahl um den Unterschied der Exponenten nach rechts
	move $a0, $s1
	sub $a1, $s2, $s3 # Berechne Unterschied der Exponenten
	jal shift_right
	move $s1, $a0 # Schreibe Rückgabewert auf Mantisse der zweiten Zahl

	# Vergleiche Vorzeichen (Addition oder Subtraktion der Mantissen)
	beq $s4, $s5, add_float_sign_eq
		# Subtrahiere Mantissen
		subu $s0, $s0, $s1
	
		# Prüfe ob resultierende Mantisse 0 ist
		beq $s0, $zero, add_float_zero
		
		# Übernehme Exponent und Vorzeichen der größeren Zahl
		move $s1, $s2
		move $s2, $s4

		# Underflow: Mantisse kann nur kleiner oder gleich der ersten Eingabemantisse sein
		# Solange bis diese Maske zutrifft: 0000 0000 1000 0000 0000 0000 0000 0000
		underflow:
			srl $t0, $s0, 23
			bne $t0, $zero, add_float_cleanup
			addiu $s1, $s1, -1
			sll $s0, $s0, 1
		j underflow
	add_float_zero:
		li $s0, 0
		li $s1, 0
		li $s2, 0
		j add_float_cleanup
	add_float_sign_eq:
		# Addiere Mantissen
		addu $s0, $s0, $s1

		# Übernehme Exponent und Vorzeichen der größeren Zahl
		move $s1, $s2
		move $s2, $s4

		# Overflow: Mantisse kann nur größer oder gleich der ersten Eingabemantisse sein
		# Wenn diese Maske zutrifft: 0000 0001 0000 0000 0000 0000 0000 0000
		srl $t0, $s0, 24
		beq $t0, $zero, add_float_cleanup

		andi $t1, $s0, 1 # Rundung: Speichere letztes Bit der Mantisse, welches abgeschnitten wird
		addiu $s1, $s1, 1 # erhöhe Exponenten
		srl $s0, $s0, 1 # Mantisse normalisieren
		addu $s0, $s0, $t1 # Rundung: Addiere abgeschnittenes Bit
	add_float_cleanup:

	# Maskiere Mantisse
	andi $s0, $s0, 0x007FFFFF

	# Springe dorthin zurück, wo add_float ausgeführt wurde
	jr $s7


# Tauscht $s0 und $s1
# Tauscht $s2 und $s3
# Tauscht $s4 und $s5
swap_floats:
	move $t0, $s0
	move $s0, $s1
	move $s1, $t0

	move $t1, $s2
	move $s2, $s3
	move $s3, $t1
	
	move $t1, $s4
	move $s4, $s5
	move $s5, $t1

	j add_float


# Shiftet $a0 nach rechts um $a1-Stellen
shift_right:
	beq $a1, $zero, return # Brich ab, sobald $a1 Null ist
	srl $a0, $a0, 1 # Verschiebe $a0 um eine Stelle nach rechts
	addiu $a1, $a1, -1 # Dekrementiere $a1
	j shift_right # Wiederhole Schleife
return:
	jr $ra
