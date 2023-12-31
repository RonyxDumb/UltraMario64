.set noat      // allow manual use of $at
.set noreorder // don't insert nops after branches

#include "macros.inc"

#include <PR/R4300.h>
#include <PR/rcp.h>
#include <PR/os.h>

.section .text, "ax"

glabel osSetIntMask
#if defined(VERSION_EU) || defined(VERSION_SH) || defined(VERSION_CN)
    mfc0  $t4, $12
    andi  $v0, $t4, OS_IM_CPU
    lui   $t0, %hi(__OSGlobalIntMask) // $t0, 0x8030
    addiu $t0, %lo(__OSGlobalIntMask) // addiu $t0, $t0, 0x208c
    lw    $t3, ($t0)
    li    $at, 0xFFFFFFFF
    xor   $t0, $t3, $at
    andi  $t0, $t0, SR_IMASK
    or    $v0, $v0, $t0
#else
    mfc0  $t1, $12
    andi  $v0, $t1, OS_IM_CPU
#endif
    lui   $t2, %hi(PHYS_TO_K1(MI_INTR_MASK_REG)) // $t2, 0xa430
    lw    $t2, %lo(PHYS_TO_K1(MI_INTR_MASK_REG))($t2)
#if defined(VERSION_EU) || defined(VERSION_SH) || defined(VERSION_CN)
    beqz  $t2, .L80200074
    srl   $t1, $t3, 0x10
    li    $at, 0xFFFFFFFF
    xor   $t1, $t1, $at
    andi  $t1, $t1, 0x3f
    or    $t2, $t2, $t1
.L80200074:
#endif
    sll   $t2, $t2, 0x10
    or    $v0, $v0, $t2
    lui   $at, 0x3f
    and   $t0, $a0, $at
#if defined(VERSION_EU) || defined(VERSION_SH) || defined(VERSION_CN)
    and   $t0, $t0, $t3
#endif
    srl   $t0, $t0, 0xf
    lui   $t2, %hi(__osRcpImTable)
    addu  $t2, $t2, $t0
    lhu   $t2, %lo(__osRcpImTable)($t2)
    lui   $at, %hi(PHYS_TO_K1(MI_INTR_MASK_REG)) // $at, 0xa430
    sw    $t2, %lo(PHYS_TO_K1(MI_INTR_MASK_REG))($at)
    andi  $t0, $a0, OS_IM_CPU
#if defined(VERSION_EU) || defined(VERSION_SH) || defined(VERSION_CN)
    andi  $t1, $t3, 0xff00
    and   $t0, $t0, $t1
#endif
    lui   $at, (0xFFFF00FF >> 16) // lui $at, 0xffff
    ori   $at, (0xFFFF00FF & 0xFFFF) // ori $at, $at, 0xff
#if defined(VERSION_EU) || defined(VERSION_SH) || defined(VERSION_CN)
    and   $t4, $t4, $at
    or    $t4, $t4, $t0
    mtc0  $t4, $12
#else
    and   $t1, $t1, $at
    or    $t1, $t1, $t0
    mtc0  $t1, $12
#endif
    nop
    nop
    jr    $ra
     nop


.section .rodata

glabel __osRcpImTable
.half 0x0555
.half 0x0556
.half 0x0559
.half 0x055A
.half 0x0565
.half 0x0566
.half 0x0569
.half 0x056A
.half 0x0595
.half 0x0596
.half 0x0599
.half 0x059A
.half 0x05A5
.half 0x05A6
.half 0x05A9
.half 0x05AA
.half 0x0655
.half 0x0656
.half 0x0659
.half 0x065A
.half 0x0665
.half 0x0666
.half 0x0669
.half 0x066A
.half 0x0695
.half 0x0696
.half 0x0699
.half 0x069A
.half 0x06A5
.half 0x06A6
.half 0x06A9
.half 0x06AA
.half 0x0955
.half 0x0956
.half 0x0959
.half 0x095A
.half 0x0965
.half 0x0966
.half 0x0969
.half 0x096A
.half 0x0995
.half 0x0996
.half 0x0999
.half 0x099A
.half 0x09A5
.half 0x09A6
.half 0x09A9
.half 0x09AA
.half 0x0A55
.half 0x0A56
.half 0x0A59
.half 0x0A5A
.half 0x0A65
.half 0x0A66
.half 0x0A69
.half 0x0A6A
.half 0x0A95
.half 0x0A96
.half 0x0A99
.half 0x0A9A
.half 0x0AA5
.half 0x0AA6
.half 0x0AA9
.half 0x0AAA
