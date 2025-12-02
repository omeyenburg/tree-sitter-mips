# Expressions with operators
.word 15 % 2
sub t3, (t4 - 8), t5
mul t6, \arg / (16 * 2), t7

# Nested expressions
.word ((label + 0x100) & 0xFFFF)
.word (ptr << 2) | offset

# Relocation expressions
li t0, %hi(symbol)
li t1, %lo(symbol)
