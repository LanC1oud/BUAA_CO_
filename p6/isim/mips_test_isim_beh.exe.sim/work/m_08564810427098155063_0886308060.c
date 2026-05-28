/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/co-eda/Verilog/Pre/mips/ALU.v";
static int ng1[] = {16, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {11U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {12U, 0U};



static void NetDecl_40_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 6296);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t10 = (t0 + 6152);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_41_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_minus(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 6360);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t10 = (t0 + 6168);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_42_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 6424);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t5, 8);
    xsi_driver_vfirst_trans(t32, 0, 31U);
    t37 = (t0 + 6184);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void NetDecl_43_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 6488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 6200);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_45_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t75[8];
    char t76[8];
    char t78[8];
    char t111[8];
    char t112[8];
    char t114[8];
    char t147[8];
    char t148[8];
    char t150[8];
    char t168[8];
    char t184[8];
    char t214[8];
    char t230[8];
    char t275[8];
    char t276[8];
    char t278[8];
    char t296[8];
    char t312[8];
    char t342[8];
    char t358[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t113;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t149;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    char *t215;
    char *t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    char *t235;
    char *t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    char *t269;
    char *t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t277;
    char *t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    char *t293;
    char *t294;
    char *t295;
    char *t297;
    char *t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    char *t311;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;
    char *t317;
    char *t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    char *t326;
    char *t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    char *t340;
    char *t341;
    char *t343;
    char *t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    char *t357;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    char *t362;
    char *t363;
    char *t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    char *t372;
    char *t373;
    unsigned int t374;
    unsigned int t375;
    unsigned int t376;
    int t377;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    char *t386;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    char *t392;
    char *t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    char *t397;
    char *t398;
    unsigned int t399;
    unsigned int t400;
    unsigned int t401;
    unsigned int t402;
    char *t403;
    char *t404;
    char *t405;
    char *t406;
    char *t407;
    char *t408;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2728U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t403 = (t0 + 6552);
    t404 = (t403 + 56U);
    t405 = *((char **)t404);
    t406 = (t405 + 56U);
    t407 = *((char **)t406);
    memcpy(t407, t3, 8);
    xsi_driver_vfirst_trans(t403, 0, 31);
    t408 = (t0 + 6216);
    *((int *)t408) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3208U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 2728U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t33 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t33);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t65);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t75, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    t64 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t69 = (t0 + 3368U);
    t70 = *((char **)t69);
    goto LAB30;

LAB31:    t69 = (t0 + 2728U);
    t77 = *((char **)t69);
    t69 = ((char*)((ng4)));
    memset(t78, 0, 8);
    t79 = (t77 + 4);
    t80 = (t69 + 4);
    t81 = *((unsigned int *)t77);
    t82 = *((unsigned int *)t69);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t79);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB41;

LAB38:    if (t90 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t78) = 1;

LAB41:    memset(t76, 0, 8);
    t94 = (t78 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t78);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t94) != 0)
        goto LAB44;

LAB45:    t101 = (t76 + 4);
    t102 = *((unsigned int *)t76);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB46;

LAB47:    t107 = *((unsigned int *)t76);
    t108 = (~(t107));
    t109 = *((unsigned int *)t101);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t101) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t76) > 0)
        goto LAB52;

LAB53:    memcpy(t75, t111, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 32, t70, 32, t75, 32);
    goto LAB37;

LAB35:    memcpy(t39, t70, 8);
    goto LAB37;

LAB40:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t76) = 1;
    goto LAB45;

LAB44:    t100 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB45;

LAB46:    t105 = (t0 + 3528U);
    t106 = *((char **)t105);
    goto LAB47;

LAB48:    t105 = (t0 + 2728U);
    t113 = *((char **)t105);
    t105 = ((char*)((ng5)));
    memset(t114, 0, 8);
    t115 = (t113 + 4);
    t116 = (t105 + 4);
    t117 = *((unsigned int *)t113);
    t118 = *((unsigned int *)t105);
    t119 = (t117 ^ t118);
    t120 = *((unsigned int *)t115);
    t121 = *((unsigned int *)t116);
    t122 = (t120 ^ t121);
    t123 = (t119 | t122);
    t124 = *((unsigned int *)t115);
    t125 = *((unsigned int *)t116);
    t126 = (t124 | t125);
    t127 = (~(t126));
    t128 = (t123 & t127);
    if (t128 != 0)
        goto LAB58;

LAB55:    if (t126 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t114) = 1;

LAB58:    memset(t112, 0, 8);
    t130 = (t114 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t114);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t130) != 0)
        goto LAB61;

LAB62:    t137 = (t112 + 4);
    t138 = *((unsigned int *)t112);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB63;

LAB64:    t143 = *((unsigned int *)t112);
    t144 = (~(t143));
    t145 = *((unsigned int *)t137);
    t146 = (t144 || t145);
    if (t146 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t137) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t112) > 0)
        goto LAB69;

LAB70:    memcpy(t111, t147, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t75, 32, t106, 32, t111, 32);
    goto LAB54;

LAB52:    memcpy(t75, t106, 8);
    goto LAB54;

LAB57:    t129 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t112) = 1;
    goto LAB62;

LAB61:    t136 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB62;

LAB63:    t141 = (t0 + 3688U);
    t142 = *((char **)t141);
    goto LAB64;

LAB65:    t141 = (t0 + 2728U);
    t149 = *((char **)t141);
    t141 = ((char*)((ng6)));
    memset(t150, 0, 8);
    t151 = (t149 + 4);
    t152 = (t141 + 4);
    t153 = *((unsigned int *)t149);
    t154 = *((unsigned int *)t141);
    t155 = (t153 ^ t154);
    t156 = *((unsigned int *)t151);
    t157 = *((unsigned int *)t152);
    t158 = (t156 ^ t157);
    t159 = (t155 | t158);
    t160 = *((unsigned int *)t151);
    t161 = *((unsigned int *)t152);
    t162 = (t160 | t161);
    t163 = (~(t162));
    t164 = (t159 & t163);
    if (t164 != 0)
        goto LAB75;

LAB72:    if (t162 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t150) = 1;

LAB75:    t166 = (t0 + 2728U);
    t167 = *((char **)t166);
    t166 = ((char*)((ng7)));
    memset(t168, 0, 8);
    t169 = (t167 + 4);
    t170 = (t166 + 4);
    t171 = *((unsigned int *)t167);
    t172 = *((unsigned int *)t166);
    t173 = (t171 ^ t172);
    t174 = *((unsigned int *)t169);
    t175 = *((unsigned int *)t170);
    t176 = (t174 ^ t175);
    t177 = (t173 | t176);
    t178 = *((unsigned int *)t169);
    t179 = *((unsigned int *)t170);
    t180 = (t178 | t179);
    t181 = (~(t180));
    t182 = (t177 & t181);
    if (t182 != 0)
        goto LAB79;

LAB76:    if (t180 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t168) = 1;

LAB79:    t185 = *((unsigned int *)t150);
    t186 = *((unsigned int *)t168);
    t187 = (t185 | t186);
    *((unsigned int *)t184) = t187;
    t188 = (t150 + 4);
    t189 = (t168 + 4);
    t190 = (t184 + 4);
    t191 = *((unsigned int *)t188);
    t192 = *((unsigned int *)t189);
    t193 = (t191 | t192);
    *((unsigned int *)t190) = t193;
    t194 = *((unsigned int *)t190);
    t195 = (t194 != 0);
    if (t195 == 1)
        goto LAB80;

LAB81:
LAB82:    t212 = (t0 + 2728U);
    t213 = *((char **)t212);
    t212 = ((char*)((ng8)));
    memset(t214, 0, 8);
    t215 = (t213 + 4);
    t216 = (t212 + 4);
    t217 = *((unsigned int *)t213);
    t218 = *((unsigned int *)t212);
    t219 = (t217 ^ t218);
    t220 = *((unsigned int *)t215);
    t221 = *((unsigned int *)t216);
    t222 = (t220 ^ t221);
    t223 = (t219 | t222);
    t224 = *((unsigned int *)t215);
    t225 = *((unsigned int *)t216);
    t226 = (t224 | t225);
    t227 = (~(t226));
    t228 = (t223 & t227);
    if (t228 != 0)
        goto LAB86;

LAB83:    if (t226 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t214) = 1;

LAB86:    t231 = *((unsigned int *)t184);
    t232 = *((unsigned int *)t214);
    t233 = (t231 | t232);
    *((unsigned int *)t230) = t233;
    t234 = (t184 + 4);
    t235 = (t214 + 4);
    t236 = (t230 + 4);
    t237 = *((unsigned int *)t234);
    t238 = *((unsigned int *)t235);
    t239 = (t237 | t238);
    *((unsigned int *)t236) = t239;
    t240 = *((unsigned int *)t236);
    t241 = (t240 != 0);
    if (t241 == 1)
        goto LAB87;

LAB88:
LAB89:    memset(t148, 0, 8);
    t258 = (t230 + 4);
    t259 = *((unsigned int *)t258);
    t260 = (~(t259));
    t261 = *((unsigned int *)t230);
    t262 = (t261 & t260);
    t263 = (t262 & 1U);
    if (t263 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t258) != 0)
        goto LAB92;

LAB93:    t265 = (t148 + 4);
    t266 = *((unsigned int *)t148);
    t267 = *((unsigned int *)t265);
    t268 = (t266 || t267);
    if (t268 > 0)
        goto LAB94;

LAB95:    t271 = *((unsigned int *)t148);
    t272 = (~(t271));
    t273 = *((unsigned int *)t265);
    t274 = (t272 || t273);
    if (t274 > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t265) > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t148) > 0)
        goto LAB100;

LAB101:    memcpy(t147, t275, 8);

LAB102:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t111, 32, t142, 32, t147, 32);
    goto LAB71;

LAB69:    memcpy(t111, t142, 8);
    goto LAB71;

LAB74:    t165 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t165) = 1;
    goto LAB75;

LAB78:    t183 = (t168 + 4);
    *((unsigned int *)t168) = 1;
    *((unsigned int *)t183) = 1;
    goto LAB79;

LAB80:    t196 = *((unsigned int *)t184);
    t197 = *((unsigned int *)t190);
    *((unsigned int *)t184) = (t196 | t197);
    t198 = (t150 + 4);
    t199 = (t168 + 4);
    t200 = *((unsigned int *)t198);
    t201 = (~(t200));
    t202 = *((unsigned int *)t150);
    t203 = (t202 & t201);
    t204 = *((unsigned int *)t199);
    t205 = (~(t204));
    t206 = *((unsigned int *)t168);
    t207 = (t206 & t205);
    t208 = (~(t203));
    t209 = (~(t207));
    t210 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t210 & t208);
    t211 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t211 & t209);
    goto LAB82;

LAB85:    t229 = (t214 + 4);
    *((unsigned int *)t214) = 1;
    *((unsigned int *)t229) = 1;
    goto LAB86;

LAB87:    t242 = *((unsigned int *)t230);
    t243 = *((unsigned int *)t236);
    *((unsigned int *)t230) = (t242 | t243);
    t244 = (t184 + 4);
    t245 = (t214 + 4);
    t246 = *((unsigned int *)t244);
    t247 = (~(t246));
    t248 = *((unsigned int *)t184);
    t249 = (t248 & t247);
    t250 = *((unsigned int *)t245);
    t251 = (~(t250));
    t252 = *((unsigned int *)t214);
    t253 = (t252 & t251);
    t254 = (~(t249));
    t255 = (~(t253));
    t256 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t256 & t254);
    t257 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t257 & t255);
    goto LAB89;

LAB90:    *((unsigned int *)t148) = 1;
    goto LAB93;

LAB92:    t264 = (t148 + 4);
    *((unsigned int *)t148) = 1;
    *((unsigned int *)t264) = 1;
    goto LAB93;

LAB94:    t269 = (t0 + 3208U);
    t270 = *((char **)t269);
    goto LAB95;

LAB96:    t269 = (t0 + 2728U);
    t277 = *((char **)t269);
    t269 = ((char*)((ng9)));
    memset(t278, 0, 8);
    t279 = (t277 + 4);
    t280 = (t269 + 4);
    t281 = *((unsigned int *)t277);
    t282 = *((unsigned int *)t269);
    t283 = (t281 ^ t282);
    t284 = *((unsigned int *)t279);
    t285 = *((unsigned int *)t280);
    t286 = (t284 ^ t285);
    t287 = (t283 | t286);
    t288 = *((unsigned int *)t279);
    t289 = *((unsigned int *)t280);
    t290 = (t288 | t289);
    t291 = (~(t290));
    t292 = (t287 & t291);
    if (t292 != 0)
        goto LAB106;

LAB103:    if (t290 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t278) = 1;

LAB106:    t294 = (t0 + 2728U);
    t295 = *((char **)t294);
    t294 = ((char*)((ng10)));
    memset(t296, 0, 8);
    t297 = (t295 + 4);
    t298 = (t294 + 4);
    t299 = *((unsigned int *)t295);
    t300 = *((unsigned int *)t294);
    t301 = (t299 ^ t300);
    t302 = *((unsigned int *)t297);
    t303 = *((unsigned int *)t298);
    t304 = (t302 ^ t303);
    t305 = (t301 | t304);
    t306 = *((unsigned int *)t297);
    t307 = *((unsigned int *)t298);
    t308 = (t306 | t307);
    t309 = (~(t308));
    t310 = (t305 & t309);
    if (t310 != 0)
        goto LAB110;

LAB107:    if (t308 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t296) = 1;

LAB110:    t313 = *((unsigned int *)t278);
    t314 = *((unsigned int *)t296);
    t315 = (t313 | t314);
    *((unsigned int *)t312) = t315;
    t316 = (t278 + 4);
    t317 = (t296 + 4);
    t318 = (t312 + 4);
    t319 = *((unsigned int *)t316);
    t320 = *((unsigned int *)t317);
    t321 = (t319 | t320);
    *((unsigned int *)t318) = t321;
    t322 = *((unsigned int *)t318);
    t323 = (t322 != 0);
    if (t323 == 1)
        goto LAB111;

LAB112:
LAB113:    t340 = (t0 + 2728U);
    t341 = *((char **)t340);
    t340 = ((char*)((ng11)));
    memset(t342, 0, 8);
    t343 = (t341 + 4);
    t344 = (t340 + 4);
    t345 = *((unsigned int *)t341);
    t346 = *((unsigned int *)t340);
    t347 = (t345 ^ t346);
    t348 = *((unsigned int *)t343);
    t349 = *((unsigned int *)t344);
    t350 = (t348 ^ t349);
    t351 = (t347 | t350);
    t352 = *((unsigned int *)t343);
    t353 = *((unsigned int *)t344);
    t354 = (t352 | t353);
    t355 = (~(t354));
    t356 = (t351 & t355);
    if (t356 != 0)
        goto LAB117;

LAB114:    if (t354 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t342) = 1;

LAB117:    t359 = *((unsigned int *)t312);
    t360 = *((unsigned int *)t342);
    t361 = (t359 | t360);
    *((unsigned int *)t358) = t361;
    t362 = (t312 + 4);
    t363 = (t342 + 4);
    t364 = (t358 + 4);
    t365 = *((unsigned int *)t362);
    t366 = *((unsigned int *)t363);
    t367 = (t365 | t366);
    *((unsigned int *)t364) = t367;
    t368 = *((unsigned int *)t364);
    t369 = (t368 != 0);
    if (t369 == 1)
        goto LAB118;

LAB119:
LAB120:    memset(t276, 0, 8);
    t386 = (t358 + 4);
    t387 = *((unsigned int *)t386);
    t388 = (~(t387));
    t389 = *((unsigned int *)t358);
    t390 = (t389 & t388);
    t391 = (t390 & 1U);
    if (t391 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t386) != 0)
        goto LAB123;

LAB124:    t393 = (t276 + 4);
    t394 = *((unsigned int *)t276);
    t395 = *((unsigned int *)t393);
    t396 = (t394 || t395);
    if (t396 > 0)
        goto LAB125;

LAB126:    t399 = *((unsigned int *)t276);
    t400 = (~(t399));
    t401 = *((unsigned int *)t393);
    t402 = (t400 || t401);
    if (t402 > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t393) > 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t276) > 0)
        goto LAB131;

LAB132:    memcpy(t275, t397, 8);

LAB133:    goto LAB97;

LAB98:    xsi_vlog_unsigned_bit_combine(t147, 32, t270, 32, t275, 32);
    goto LAB102;

LAB100:    memcpy(t147, t270, 8);
    goto LAB102;

LAB105:    t293 = (t278 + 4);
    *((unsigned int *)t278) = 1;
    *((unsigned int *)t293) = 1;
    goto LAB106;

LAB109:    t311 = (t296 + 4);
    *((unsigned int *)t296) = 1;
    *((unsigned int *)t311) = 1;
    goto LAB110;

LAB111:    t324 = *((unsigned int *)t312);
    t325 = *((unsigned int *)t318);
    *((unsigned int *)t312) = (t324 | t325);
    t326 = (t278 + 4);
    t327 = (t296 + 4);
    t328 = *((unsigned int *)t326);
    t329 = (~(t328));
    t330 = *((unsigned int *)t278);
    t331 = (t330 & t329);
    t332 = *((unsigned int *)t327);
    t333 = (~(t332));
    t334 = *((unsigned int *)t296);
    t335 = (t334 & t333);
    t336 = (~(t331));
    t337 = (~(t335));
    t338 = *((unsigned int *)t318);
    *((unsigned int *)t318) = (t338 & t336);
    t339 = *((unsigned int *)t318);
    *((unsigned int *)t318) = (t339 & t337);
    goto LAB113;

LAB116:    t357 = (t342 + 4);
    *((unsigned int *)t342) = 1;
    *((unsigned int *)t357) = 1;
    goto LAB117;

LAB118:    t370 = *((unsigned int *)t358);
    t371 = *((unsigned int *)t364);
    *((unsigned int *)t358) = (t370 | t371);
    t372 = (t312 + 4);
    t373 = (t342 + 4);
    t374 = *((unsigned int *)t372);
    t375 = (~(t374));
    t376 = *((unsigned int *)t312);
    t377 = (t376 & t375);
    t378 = *((unsigned int *)t373);
    t379 = (~(t378));
    t380 = *((unsigned int *)t342);
    t381 = (t380 & t379);
    t382 = (~(t377));
    t383 = (~(t381));
    t384 = *((unsigned int *)t364);
    *((unsigned int *)t364) = (t384 & t382);
    t385 = *((unsigned int *)t364);
    *((unsigned int *)t364) = (t385 & t383);
    goto LAB120;

LAB121:    *((unsigned int *)t276) = 1;
    goto LAB124;

LAB123:    t392 = (t276 + 4);
    *((unsigned int *)t276) = 1;
    *((unsigned int *)t392) = 1;
    goto LAB124;

LAB125:    t397 = (t0 + 3208U);
    t398 = *((char **)t397);
    goto LAB126;

LAB127:    t397 = ((char*)((ng2)));
    goto LAB128;

LAB129:    xsi_vlog_unsigned_bit_combine(t275, 32, t398, 32, t397, 32);
    goto LAB133;

LAB131:    memcpy(t275, t398, 8);
    goto LAB133;

}


extern void work_m_08564810427098155063_0886308060_init()
{
	static char *pe[] = {(void *)NetDecl_40_0,(void *)NetDecl_41_1,(void *)NetDecl_42_2,(void *)NetDecl_43_3,(void *)Cont_45_4};
	xsi_register_didat("work_m_08564810427098155063_0886308060", "isim/mips_test_isim_beh.exe.sim/work/m_08564810427098155063_0886308060.didat");
	xsi_register_executes(pe);
}
