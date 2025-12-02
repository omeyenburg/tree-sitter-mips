.macro FOO
    nop
.endm

.macro BAR arg1, arg2
    add \arg1, \arg2, zero
.end_macro

.macro BAZ(arg1:req, arg2=label)
    .string "Hello World \arg1"
    j \arg2
.end_macro
