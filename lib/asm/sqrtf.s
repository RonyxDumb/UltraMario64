.set noat      // allow manual use of $at
.set noreorder // don't insert nops after branches

#include "macros.inc"

.section .text, "ax"

glabel sqrtf
    jr $ra
     sqrt.s $f0, $f12
