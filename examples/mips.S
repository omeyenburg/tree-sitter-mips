.text
.macro LOAD reg, val
    li \reg, \val
.endm

main: # Comment
    LOAD t0, 0x42
    la   a0, msg
    flw  ft0, pi(t0)
    jal  ra, func
    nop

func:   jalr x0, ra, 0

.data
msg:    .asciz "Hello World!"
pi:     .float 3.14
