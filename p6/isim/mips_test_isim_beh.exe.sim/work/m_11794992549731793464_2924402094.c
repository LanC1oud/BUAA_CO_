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
static const char *ng0 = "/home/co-eda/Verilog/Pre/mips/DM.v";
static int ng1[] = {2, 0};
static int ng2[] = {0, 0};
static int ng3[] = {4096, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {7, 0};
static int ng8[] = {15, 0};
static int ng9[] = {8, 0};
static int ng10[] = {23, 0};
static int ng11[] = {16, 0};
static int ng12[] = {31, 0};
static int ng13[] = {24, 0};
static const char *ng14 = "%d@%h: *%h <= %h";



static void NetDecl_32_0(char *t0)
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

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 4704);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t57[8];
    char t58[8];
    char t61[8];
    char t62[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
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
    char *t59;
    char *t60;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    int t76;
    int t77;
    char *t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4720);
    *((int *)t2) = 1;
    t3 = (t0 + 3920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);

LAB16:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t27 = (t10 & 1);
    *((unsigned int *)t2) = t27;
    t5 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t30 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t5);
    t34 = (t30 ^ t33);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t12);
    t39 = (t37 ^ t38);
    t40 = (t34 | t39);
    t41 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t12);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB20;

LAB17:    if (t43 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t15) = 1;

LAB20:    t17 = (t15 + 4);
    t46 = *((unsigned int *)t17);
    t47 = (~(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t27 = (t10 & 1);
    *((unsigned int *)t2) = t27;
    t5 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t30 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t5);
    t34 = (t30 ^ t33);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t12);
    t39 = (t37 ^ t38);
    t40 = (t34 | t39);
    t41 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t12);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB30;

LAB27:    if (t43 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t15) = 1;

LAB30:    t17 = (t15 + 4);
    t46 = *((unsigned int *)t17);
    t47 = (~(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t27 = (t10 & 1);
    *((unsigned int *)t2) = t27;
    t5 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t30 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t5);
    t34 = (t30 ^ t33);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t12);
    t39 = (t37 ^ t38);
    t40 = (t34 | t39);
    t41 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t12);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB40;

LAB37:    if (t43 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t15) = 1;

LAB40:    t17 = (t15 + 4);
    t46 = *((unsigned int *)t17);
    t47 = (~(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t27 = (t10 & 1);
    *((unsigned int *)t2) = t27;
    t5 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t30 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t5);
    t34 = (t30 ^ t33);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t12);
    t39 = (t37 ^ t38);
    t40 = (t34 | t39);
    t41 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t12);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB50;

LAB47:    if (t43 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t15) = 1;

LAB50:    t17 = (t15 + 4);
    t46 = *((unsigned int *)t17);
    t47 = (~(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB51;

LAB52:
LAB53:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t12 = ((char*)((ng4)));
    t14 = (t0 + 2568);
    t17 = (t0 + 2568);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2568);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB19:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(41, ng0);

LAB24:    xsi_set_current_line(42, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t18 = (t16 + 4);
    t20 = (t19 + 4);
    t51 = *((unsigned int *)t19);
    t52 = (t51 >> 0);
    *((unsigned int *)t16) = t52;
    t53 = *((unsigned int *)t20);
    t54 = (t53 >> 0);
    *((unsigned int *)t18) = t54;
    t55 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t55 & 255U);
    t56 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t56 & 255U);
    t21 = (t0 + 2568);
    t22 = (t0 + 2568);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2568);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t59 = (t0 + 2168U);
    t60 = *((char **)t59);
    xsi_vlog_generic_convert_array_indices(t57, t58, t24, t29, 2, 1, t60, 32, 2);
    t59 = (t0 + 2568);
    t64 = (t59 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng7)));
    t67 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t61, t62, t63, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t57 + 4);
    t69 = *((unsigned int *)t68);
    t28 = (!(t69));
    t70 = (t58 + 4);
    t71 = *((unsigned int *)t70);
    t31 = (!(t71));
    t32 = (t28 && t31);
    t72 = (t61 + 4);
    t73 = *((unsigned int *)t72);
    t35 = (!(t73));
    t36 = (t32 && t35);
    t74 = (t62 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (!(t75));
    t77 = (t36 && t76);
    t78 = (t63 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (!(t79));
    t81 = (t77 && t80);
    if (t81 == 1)
        goto LAB25;

LAB26:    goto LAB23;

LAB25:    t82 = *((unsigned int *)t63);
    t83 = (t82 + 0);
    t84 = *((unsigned int *)t58);
    t85 = *((unsigned int *)t62);
    t86 = (t84 + t85);
    t87 = *((unsigned int *)t61);
    t88 = *((unsigned int *)t62);
    t89 = (t87 - t88);
    t90 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t21, t16, t83, t86, t90, 0LL);
    goto LAB26;

LAB29:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(44, ng0);

LAB34:    xsi_set_current_line(45, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t18 = (t16 + 4);
    t20 = (t19 + 4);
    t51 = *((unsigned int *)t19);
    t52 = (t51 >> 8);
    *((unsigned int *)t16) = t52;
    t53 = *((unsigned int *)t20);
    t54 = (t53 >> 8);
    *((unsigned int *)t18) = t54;
    t55 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t55 & 255U);
    t56 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t56 & 255U);
    t21 = (t0 + 2568);
    t22 = (t0 + 2568);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2568);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t59 = (t0 + 2168U);
    t60 = *((char **)t59);
    xsi_vlog_generic_convert_array_indices(t57, t58, t24, t29, 2, 1, t60, 32, 2);
    t59 = (t0 + 2568);
    t64 = (t59 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng8)));
    t67 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t61, t62, t63, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t57 + 4);
    t69 = *((unsigned int *)t68);
    t28 = (!(t69));
    t70 = (t58 + 4);
    t71 = *((unsigned int *)t70);
    t31 = (!(t71));
    t32 = (t28 && t31);
    t72 = (t61 + 4);
    t73 = *((unsigned int *)t72);
    t35 = (!(t73));
    t36 = (t32 && t35);
    t74 = (t62 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (!(t75));
    t77 = (t36 && t76);
    t78 = (t63 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (!(t79));
    t81 = (t77 && t80);
    if (t81 == 1)
        goto LAB35;

LAB36:    goto LAB33;

LAB35:    t82 = *((unsigned int *)t63);
    t83 = (t82 + 0);
    t84 = *((unsigned int *)t58);
    t85 = *((unsigned int *)t62);
    t86 = (t84 + t85);
    t87 = *((unsigned int *)t61);
    t88 = *((unsigned int *)t62);
    t89 = (t87 - t88);
    t90 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t21, t16, t83, t86, t90, 0LL);
    goto LAB36;

LAB39:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(47, ng0);

LAB44:    xsi_set_current_line(48, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t18 = (t16 + 4);
    t20 = (t19 + 4);
    t51 = *((unsigned int *)t19);
    t52 = (t51 >> 16);
    *((unsigned int *)t16) = t52;
    t53 = *((unsigned int *)t20);
    t54 = (t53 >> 16);
    *((unsigned int *)t18) = t54;
    t55 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t55 & 255U);
    t56 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t56 & 255U);
    t21 = (t0 + 2568);
    t22 = (t0 + 2568);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2568);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t59 = (t0 + 2168U);
    t60 = *((char **)t59);
    xsi_vlog_generic_convert_array_indices(t57, t58, t24, t29, 2, 1, t60, 32, 2);
    t59 = (t0 + 2568);
    t64 = (t59 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng10)));
    t67 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t61, t62, t63, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t57 + 4);
    t69 = *((unsigned int *)t68);
    t28 = (!(t69));
    t70 = (t58 + 4);
    t71 = *((unsigned int *)t70);
    t31 = (!(t71));
    t32 = (t28 && t31);
    t72 = (t61 + 4);
    t73 = *((unsigned int *)t72);
    t35 = (!(t73));
    t36 = (t32 && t35);
    t74 = (t62 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (!(t75));
    t77 = (t36 && t76);
    t78 = (t63 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (!(t79));
    t81 = (t77 && t80);
    if (t81 == 1)
        goto LAB45;

LAB46:    goto LAB43;

LAB45:    t82 = *((unsigned int *)t63);
    t83 = (t82 + 0);
    t84 = *((unsigned int *)t58);
    t85 = *((unsigned int *)t62);
    t86 = (t84 + t85);
    t87 = *((unsigned int *)t61);
    t88 = *((unsigned int *)t62);
    t89 = (t87 - t88);
    t90 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t21, t16, t83, t86, t90, 0LL);
    goto LAB46;

LAB49:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(50, ng0);

LAB54:    xsi_set_current_line(51, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t18 = (t16 + 4);
    t20 = (t19 + 4);
    t51 = *((unsigned int *)t19);
    t52 = (t51 >> 24);
    *((unsigned int *)t16) = t52;
    t53 = *((unsigned int *)t20);
    t54 = (t53 >> 24);
    *((unsigned int *)t18) = t54;
    t55 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t55 & 255U);
    t56 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t56 & 255U);
    t21 = (t0 + 2568);
    t22 = (t0 + 2568);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2568);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t59 = (t0 + 2168U);
    t60 = *((char **)t59);
    xsi_vlog_generic_convert_array_indices(t57, t58, t24, t29, 2, 1, t60, 32, 2);
    t59 = (t0 + 2568);
    t64 = (t59 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng12)));
    t67 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t61, t62, t63, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t57 + 4);
    t69 = *((unsigned int *)t68);
    t28 = (!(t69));
    t70 = (t58 + 4);
    t71 = *((unsigned int *)t70);
    t31 = (!(t71));
    t32 = (t28 && t31);
    t72 = (t61 + 4);
    t73 = *((unsigned int *)t72);
    t35 = (!(t73));
    t36 = (t32 && t35);
    t74 = (t62 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (!(t75));
    t77 = (t36 && t76);
    t78 = (t63 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (!(t79));
    t81 = (t77 && t80);
    if (t81 == 1)
        goto LAB55;

LAB56:    goto LAB53;

LAB55:    t82 = *((unsigned int *)t63);
    t83 = (t82 + 0);
    t84 = *((unsigned int *)t58);
    t85 = *((unsigned int *)t62);
    t86 = (t84 + t85);
    t87 = *((unsigned int *)t61);
    t88 = *((unsigned int *)t62);
    t89 = (t87 - t88);
    t90 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t21, t16, t83, t86, t90, 0LL);
    goto LAB56;

}

static void Cont_56_2(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2568);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2168U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 32, 2);
    t12 = (t0 + 4896);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4736);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_58_3(char *t0)
{
    char t6[8];
    char t17[8];
    char t26[8];
    char t34[8];
    char t72[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;

LAB0:    t1 = (t0 + 4384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4752);
    *((int *)t2) = 1;
    t3 = (t0 + 4416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 15U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t34, t6, 8);

LAB12:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t18) == 0)
        goto LAB13;

LAB15:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB16:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB20:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t6 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB23;

LAB24:    xsi_set_current_line(59, ng0);

LAB27:    xsi_set_current_line(60, ng0);
    t73 = xsi_vlog_time(t72, 1000.0000000000000, 1000.0000000000000);
    t74 = (t0 + 1848U);
    t75 = *((char **)t74);
    t74 = (t0 + 1048U);
    t76 = *((char **)t74);
    t74 = (t0 + 1208U);
    t77 = *((char **)t74);
    xsi_vlogfile_write(1, 0, 0, ng14, 5, t0, (char)118, t72, 64, (char)118, t75, 32, (char)118, t76, 32, (char)118, t77, 32);
    goto LAB26;

}


extern void work_m_11794992549731793464_2924402094_init()
{
	static char *pe[] = {(void *)NetDecl_32_0,(void *)Always_35_1,(void *)Cont_56_2,(void *)Always_58_3};
	xsi_register_didat("work_m_11794992549731793464_2924402094", "isim/mips_test_isim_beh.exe.sim/work/m_11794992549731793464_2924402094.didat");
	xsi_register_executes(pe);
}
