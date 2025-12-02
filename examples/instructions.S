# MIPS registers
add x3, x12, zero
fadd ft0, fs0, fa0
flw $ft1, 0(x10)

# MIPS registers
addi $a2, $sp, 8
sub $s3, $t0, %lo(symbol)
bne $a1, $zero, label
