# Basic macro definition
.macro simple_macro
    nop
.endm

# Macro with parameters
.macro two_param arg1, arg2
    add \arg1, \arg2, $zero
.end_macro

# Macro with parameters in parenthesis
.macro two_param(arg1, arg2)
    add \arg1, \arg2, $zero
.end_macro
