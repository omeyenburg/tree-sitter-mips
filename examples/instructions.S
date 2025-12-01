# Simple instructions
add $t0, $t1, $t2
lw $t1, label
lw $t2, 0($sp)
add $t3, $t4, $t5
jal func + 4

# Different registers
add $zero, $at, $v0
add x0, x1, x2
add $f0, $ft1, $fs2

# Block comments as separators
add/* foo */$t0, $t1, $t2
add $t0/* bar */,/* baz */$t1, $t2
