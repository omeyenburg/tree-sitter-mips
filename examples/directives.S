.file "test.s"

.section .data, "aw", @progbits

.word label + 4
.word 1, 2, 3,
      5, 4, 5,
      7, 8, 9

.float .42f
.double 1.0e-10

.globl main
.type symbol, @function
