#include "libultra_internal.h"

#if defined(VERSION_SH) || defined(VERSION_CN)
#define COMMON_BURST 72621626
#define COMMON_HSYNC 1510505
#define COMMON_LEAP 208604269
#else
#define COMMON_BURST 67380026
#define COMMON_HSYNC 1379433
#define COMMON_LEAP 208604270
#endif

#ifdef VERSION_CN
#define CN_SUB 8192
#else
#define CN_SUB 0
#endif

OSViMode osViModeTable[] = {
    /*osViModeNtscLpn1*/
    { /*type*/ 0,
      /*comRegs*/
      { /*ctrl*/ 12814 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 65348153,
        /*vSync*/ 525,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscLpf1*/
    { /*type*/ 1,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 16778240,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 50332672,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscLan1*/
    { /*type*/ 2,
      /*comRegs*/
      { /*ctrl*/ 12574 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 65348153,
        /*vSync*/ 525,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscLaf1*/
    { /*type*/ 3,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 16778240,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 50332672,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscLpn2*/
    { /*type*/ 4,
      /*comRegs*/
      { /*ctrl*/ 13071 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 65348153,
        /*vSync*/ 525,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscLpf2*/
    { /*type*/ 5,
      /*comRegs*/
      { /*ctrl*/ 12879 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 16778240,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 50332672,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscLan2*/
    { /*type*/ 6,
      /*comRegs*/
      { /*ctrl*/ 12319 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 65348153,
        /*vSync*/ 525,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscLaf2*/
    { /*type*/ 7,
      /*comRegs*/
      { /*ctrl*/ 12383 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 16778240,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 50332672,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscHpn1*/
    { /*type*/ 8,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscHpf1*/
    { /*type*/ 9,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 640,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 33556480,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscHan1*/
    { /*type*/ 10,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscHaf1*/
    { /*type*/ 11,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 640,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 33556480,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscHpn2*/
    { /*type*/ 12,
      /*comRegs*/
      { /*ctrl*/ 13135 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 5120,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModeNtscHpf2*/
    { /*type*/ 13,
      /*comRegs*/
      { /*ctrl*/ 12879 - CN_SUB,
        /*width*/ 640,
        /*burst*/ 65348153,
        /*vSync*/ 524,
        /*hSync*/ 3093,
        /*leap*/ 202705941,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 2294269,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 5120,
          /*yScale*/ 33556480,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },

#ifndef VERSION_US
    /*osViModePalLpn1*/
    { /*type*/ 14,
      /*comRegs*/
      { /*ctrl*/ 12814 - CN_SUB,
        /*width*/ 320,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 625,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 } } },
    /*osViModePalLpf1*/
    { /*type*/ 15,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 320,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 16778240,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 50332672,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalLan1*/
    { /*type*/ 16,
      /*comRegs*/
      { /*ctrl*/ 12574 - CN_SUB,
        /*width*/ 320,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 625,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 } } },
    /*osViModePalLaf1*/
    { /*type*/ 17,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 320,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 16778240,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 50332672,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalLpn2*/
    { /*type*/ 18,
      /*comRegs*/
      { /*ctrl*/ 13071 - CN_SUB,
        /*width*/ 320,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 625,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 } } },
    /*osViModePalLpf2*/
    { /*type*/ 19,
      /*comRegs*/
      { /*ctrl*/ 12879 - CN_SUB,
        /*width*/ 320,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 16778240,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 50332672,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalLan2*/
    { /*type*/ 20,
      /*comRegs*/
      { /*ctrl*/ 12319 - CN_SUB,
        /*width*/ 320,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 625,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 } } },
    /*osViModePalLaf2*/
    { /*type*/ 21,
      /*comRegs*/
      { /*ctrl*/ 12383 - CN_SUB,
        /*width*/ 320,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 16778240,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 50332672,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalHpn1*/
    { /*type*/ 22,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalHpf1*/
    { /*type*/ 23,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 640,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 33556480,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalHan1*/
    { /*type*/ 24,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalHaf1*/
    { /*type*/ 25,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 640,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 33556480,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalHpn2*/
    { /*type*/ 26,
      /*comRegs*/
      { /*ctrl*/ 13135 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 5120,
          /*yScale*/ 1024,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
    /*osViModePalHpf2*/
    { /*type*/ 27,
      /*comRegs*/
      { /*ctrl*/ 12879 - CN_SUB,
        /*width*/ 640,
        /*burst*/ COMMON_BURST,
        /*vSync*/ 624,
        /*hSync*/ COMMON_HSYNC,
        /*leap*/ COMMON_LEAP,
        /*hStart*/ 8389376,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 6095415,
          /*vBurst*/ 590443,
          /*vIntr*/ 2 },
        { /*origin*/ 5120,
          /*yScale*/ 33556480,
          /*vStart*/ 6226489,
          /*vBurst*/ 852585,
          /*vIntr*/ 2 } } },
#endif

#ifndef VERSION_JP
    /*osViModePalLpn1*/
    { /*type*/ 28,
      /*comRegs*/
      { /*ctrl*/ 12814 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 73735737,
        /*vSync*/ 525,
        /*hSync*/ 265233,
        /*leap*/ 202968090,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalLpf1*/
    { /*type*/ 29,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 16778240,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 50332672,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalLan1*/
    { /*type*/ 30,
      /*comRegs*/
      { /*ctrl*/ 12574 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 73735737,
        /*vSync*/ 525,
        /*hSync*/ 265233,
        /*leap*/ 202968090,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalLaf1*/
    { /*type*/ 31,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 640,
          /*yScale*/ 16778240,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 640,
          /*yScale*/ 50332672,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalLpn2*/
    { /*type*/ 32,
      /*comRegs*/
      { /*ctrl*/ 13071 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 73735737,
        /*vSync*/ 525,
        /*hSync*/ 265233,
        /*leap*/ 202968090,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalLpf2*/
    { /*type*/ 33,
      /*comRegs*/
      { /*ctrl*/ 12879 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 16778240,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 50332672,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalLan2*/
    { /*type*/ 34,
      /*comRegs*/
      { /*ctrl*/ 12319 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 73735737,
        /*vSync*/ 525,
        /*hSync*/ 265233,
        /*leap*/ 202968090,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalLaf2*/
    { /*type*/ 35,
      /*comRegs*/
      { /*ctrl*/ 12383 - CN_SUB,
        /*width*/ 320,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 512,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 16778240,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 1280,
          /*yScale*/ 50332672,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalHpn1*/
    { /*type*/ 36,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalHpf1*/
    { /*type*/ 37,
      /*comRegs*/
      { /*ctrl*/ 12878 - CN_SUB,
        /*width*/ 640,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 33556480,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalHan1*/
    { /*type*/ 38,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 1024,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalHaf1*/
    { /*type*/ 39,
      /*comRegs*/
      { /*ctrl*/ 12382 - CN_SUB,
        /*width*/ 640,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 1280,
          /*yScale*/ 33556480,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalHpn2*/
    { /*type*/ 40,
      /*comRegs*/
      { /*ctrl*/ 13135 - CN_SUB,
        /*width*/ 1280,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 2560,
          /*yScale*/ 1024,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 5120,
          /*yScale*/ 1024,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } },
    /*osViModePalHpf2*/
    { /*type*/ 41,
      /*comRegs*/
      { /*ctrl*/ 12879 - CN_SUB,
        /*width*/ 640,
        /*burst*/ 73735737,
        /*vSync*/ 524,
        /*hSync*/ 3088,
        /*leap*/ 203164700,
        /*hStart*/ 7078636,
        /*xScale*/ 1024,
        /*vCurrent*/ 0 },
      /*fldRegs*/
      { { /*origin*/ 2560,
          /*yScale*/ 33556480,
          /*vStart*/ 2294269,
          /*vBurst*/ 721410,
          /*vIntr*/ 2 },
        { /*origin*/ 5120,
          /*yScale*/ 33556480,
          /*vStart*/ 2425343,
          /*vBurst*/ 918020,
          /*vIntr*/ 2 } } }
#endif
};

#ifdef VERSION_CN
s8 unk_cn_803191c0[] = {0x2A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x0E, 0x00, 0x00, 0x01, 0x40, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x71, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x4E, 0x00, 0x00, 0x01, 0x40, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x01, 0x00, 0x04, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x03, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x1E, 0x00, 0x00, 0x01, 0x40, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x71, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x5E, 0x00, 0x00, 0x01, 0x40, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x01, 0x00, 0x04, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x03, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x0F, 0x00, 0x00, 0x01, 0x40, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x71, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x4F, 0x00, 0x00, 0x01, 0x40, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x00, 0x00, 0x01, 0x40, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x71, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x5F, 0x00, 0x00, 0x01, 0x40, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x4E, 0x00, 0x00, 0x05, 0x00, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x4E, 0x00, 0x00, 0x02, 0x80, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0A, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x5E, 0x00, 0x00, 0x05, 0x00, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x5E, 0x00, 0x00, 0x02, 0x80, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0A, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x4F, 0x00, 0x00, 0x05, 0x00, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x4F, 0x00, 0x00, 0x02, 0x80, 0x04, 0x54, 0x1E, 0x3A, 0x00, 0x00, 0x02, 0x70, 0x00, 0x17, 0x0C, 0x69, 0x0C, 0x6F, 0x0C, 0x6D, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x2D, 0x02, 0x67, 0x00, 0x09, 0x02, 0x6B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x14, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x2F, 0x02, 0x69, 0x00, 0x0D, 0x02, 0x69, 0x00, 0x00, 0x00, 0x02};
#endif
