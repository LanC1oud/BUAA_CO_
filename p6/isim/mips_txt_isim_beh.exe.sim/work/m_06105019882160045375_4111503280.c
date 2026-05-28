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
static const char *ng0 = "/home/co-eda/Verilog/Pre/p6/MDU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {19U, 0U};
static unsigned int ng3[] = {20U, 0U};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {15U, 0U};
static unsigned int ng7[] = {16U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {17U, 0U};
static unsigned int ng12[] = {18U, 0U};



static void Always_45_0(char *t0)
{
    char t13[8];
    char t28[16];
    char t29[16];
    char t31[16];
    char t33[8];
    char t53[8];
    char t56[8];
    char t58[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t30;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    char *t55;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;

LAB0:    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5704);
    *((int *)t2) = 1;
    t3 = (t0 + 4920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;

LAB30:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;

LAB38:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB46;

LAB43:    if (t18 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t13) = 1;

LAB46:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t13) = 1;

LAB62:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB63;

LAB64:
LAB65:
LAB49:
LAB41:
LAB33:
LAB25:
LAB17:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB75;

LAB76:
LAB77:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB132;

LAB131:    if (t18 != 0)
        goto LAB133;

LAB134:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB135;

LAB136:
LAB137:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(51, ng0);

LAB18:    xsi_set_current_line(52, ng0);
    t26 = (t0 + 2456U);
    t27 = *((char **)t26);
    t26 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 32, 0LL);
    goto LAB17;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(53, ng0);

LAB26:    xsi_set_current_line(54, ng0);
    t26 = (t0 + 2456U);
    t27 = *((char **)t26);
    t26 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 32, 0LL);
    goto LAB25;

LAB29:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(55, ng0);

LAB34:    xsi_set_current_line(56, ng0);
    t26 = (t0 + 2456U);
    t27 = *((char **)t26);
    xsi_vlogtype_sign_extend(t28, 64, t27, 32);
    t26 = (t0 + 2616U);
    t30 = *((char **)t26);
    xsi_vlogtype_sign_extend(t29, 64, t30, 32);
    xsi_vlog_signed_multiply(t31, 64, t28, 64, t29, 64);
    t26 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t26, t31, 0, 0, 32, 0LL);
    t32 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t32, t31, 32, 0, 32, 0LL);
    goto LAB33;

LAB37:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(57, ng0);

LAB42:    xsi_set_current_line(58, ng0);
    t26 = (t0 + 2456U);
    t27 = *((char **)t26);
    t26 = (t0 + 2616U);
    t30 = *((char **)t26);
    xsi_vlog_unsigned_multiply(t28, 64, t27, 32, t30, 32);
    t26 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t26, t28, 0, 0, 32, 0LL);
    t32 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t32, t28, 32, 0, 32, 0LL);
    goto LAB41;

LAB45:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(59, ng0);

LAB50:    xsi_set_current_line(60, ng0);
    t26 = (t0 + 2616U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng1)));
    memset(t33, 0, 8);
    t30 = (t27 + 4);
    t32 = (t26 + 4);
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t26);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t30);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB52;

LAB51:    if (t43 != 0)
        goto LAB53;

LAB54:    t47 = (t33 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t33);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB49;

LAB52:    *((unsigned int *)t33) = 1;
    goto LAB54;

LAB53:    t46 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(60, ng0);

LAB58:    xsi_set_current_line(61, ng0);
    t54 = (t0 + 2456U);
    t55 = *((char **)t54);
    t54 = (t0 + 2616U);
    t57 = *((char **)t54);
    memset(t58, 0, 8);
    xsi_vlog_signed_mod(t58, 32, t55, 32, t57, 32);
    t54 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t54, t58, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    memset(t53, 0, 8);
    xsi_vlog_signed_divide(t53, 32, t3, 32, t4, 32);
    t2 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t2, t53, 0, 0, 32, 0LL);
    goto LAB57;

LAB61:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(64, ng0);

LAB66:    xsi_set_current_line(65, ng0);
    t26 = (t0 + 2616U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng1)));
    memset(t33, 0, 8);
    t30 = (t27 + 4);
    t32 = (t26 + 4);
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t26);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t30);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB68;

LAB67:    if (t43 != 0)
        goto LAB69;

LAB70:    t47 = (t33 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t33);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB65;

LAB68:    *((unsigned int *)t33) = 1;
    goto LAB70;

LAB69:    t46 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(65, ng0);

LAB74:    xsi_set_current_line(66, ng0);
    t54 = (t0 + 2456U);
    t55 = *((char **)t54);
    t54 = (t0 + 2616U);
    t57 = *((char **)t54);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_mod(t53, 32, t55, 32, t57, 32);
    t54 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 32, 0LL);
    goto LAB73;

LAB75:    xsi_set_current_line(71, ng0);

LAB78:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 2776U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB82;

LAB79:    if (t23 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t13) = 1;

LAB82:    memset(t33, 0, 8);
    t27 = (t13 + 4);
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = *((unsigned int *)t13);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t27) != 0)
        goto LAB85;

LAB86:    t32 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t40 = (!(t39));
    t41 = *((unsigned int *)t32);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB87;

LAB88:    memcpy(t58, t33, 8);

LAB89:    t97 = (t58 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t58);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB108;

LAB105:    if (t18 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t13) = 1;

LAB108:    memset(t33, 0, 8);
    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t12) != 0)
        goto LAB111;

LAB112:    t27 = (t33 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = *((unsigned int *)t27);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB113;

LAB114:    memcpy(t58, t33, 8);

LAB115:    t83 = (t58 + 4);
    t91 = *((unsigned int *)t83);
    t93 = (~(t91));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB127;

LAB128:
LAB129:
LAB103:    goto LAB77;

LAB81:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t33) = 1;
    goto LAB86;

LAB85:    t30 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB86;

LAB87:    t46 = (t0 + 2776U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng5)));
    memset(t53, 0, 8);
    t54 = (t47 + 4);
    t55 = (t46 + 4);
    t43 = *((unsigned int *)t47);
    t44 = *((unsigned int *)t46);
    t45 = (t43 ^ t44);
    t48 = *((unsigned int *)t54);
    t49 = *((unsigned int *)t55);
    t50 = (t48 ^ t49);
    t51 = (t45 | t50);
    t52 = *((unsigned int *)t54);
    t59 = *((unsigned int *)t55);
    t60 = (t52 | t59);
    t61 = (~(t60));
    t62 = (t51 & t61);
    if (t62 != 0)
        goto LAB93;

LAB90:    if (t60 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t53) = 1;

LAB93:    memset(t56, 0, 8);
    t63 = (t53 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t53);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t63) != 0)
        goto LAB96;

LAB97:    t70 = *((unsigned int *)t33);
    t71 = *((unsigned int *)t56);
    t72 = (t70 | t71);
    *((unsigned int *)t58) = t72;
    t73 = (t33 + 4);
    t74 = (t56 + 4);
    t75 = (t58 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB98;

LAB99:
LAB100:    goto LAB89;

LAB92:    t57 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t56) = 1;
    goto LAB97;

LAB96:    t69 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB97;

LAB98:    t81 = *((unsigned int *)t58);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t58) = (t81 | t82);
    t83 = (t33 + 4);
    t84 = (t56 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (~(t85));
    t87 = *((unsigned int *)t33);
    t88 = (t87 & t86);
    t89 = *((unsigned int *)t84);
    t90 = (~(t89));
    t91 = *((unsigned int *)t56);
    t92 = (t91 & t90);
    t93 = (~(t88));
    t94 = (~(t92));
    t95 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t95 & t93);
    t96 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t96 & t94);
    goto LAB100;

LAB101:    xsi_set_current_line(72, ng0);

LAB104:    xsi_set_current_line(73, ng0);
    t103 = ((char*)((ng8)));
    t104 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t104, t103, 0, 0, 4, 0LL);
    goto LAB103;

LAB107:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB108;

LAB109:    *((unsigned int *)t33) = 1;
    goto LAB112;

LAB111:    t26 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB112;

LAB113:    t30 = (t0 + 2776U);
    t32 = *((char **)t30);
    t30 = ((char*)((ng7)));
    memset(t53, 0, 8);
    t46 = (t32 + 4);
    t47 = (t30 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t30);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t46);
    t42 = *((unsigned int *)t47);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t46);
    t48 = *((unsigned int *)t47);
    t49 = (t45 | t48);
    t50 = (~(t49));
    t51 = (t44 & t50);
    if (t51 != 0)
        goto LAB119;

LAB116:    if (t49 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t53) = 1;

LAB119:    memset(t56, 0, 8);
    t55 = (t53 + 4);
    t52 = *((unsigned int *)t55);
    t59 = (~(t52));
    t60 = *((unsigned int *)t53);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t55) != 0)
        goto LAB122;

LAB123:    t64 = *((unsigned int *)t33);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    *((unsigned int *)t58) = t66;
    t63 = (t33 + 4);
    t69 = (t56 + 4);
    t73 = (t58 + 4);
    t67 = *((unsigned int *)t63);
    t68 = *((unsigned int *)t69);
    t70 = (t67 | t68);
    *((unsigned int *)t73) = t70;
    t71 = *((unsigned int *)t73);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB124;

LAB125:
LAB126:    goto LAB115;

LAB118:    t54 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB119;

LAB120:    *((unsigned int *)t56) = 1;
    goto LAB123;

LAB122:    t57 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB123;

LAB124:    t76 = *((unsigned int *)t58);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t58) = (t76 | t77);
    t74 = (t33 + 4);
    t75 = (t56 + 4);
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t33);
    t88 = (t80 & t79);
    t81 = *((unsigned int *)t75);
    t82 = (~(t81));
    t85 = *((unsigned int *)t56);
    t92 = (t85 & t82);
    t86 = (~(t88));
    t87 = (~(t92));
    t89 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t89 & t86);
    t90 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t90 & t87);
    goto LAB126;

LAB127:    xsi_set_current_line(74, ng0);

LAB130:    xsi_set_current_line(75, ng0);
    t84 = ((char*)((ng9)));
    t97 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t97, t84, 0, 0, 4, 0LL);
    goto LAB129;

LAB132:    *((unsigned int *)t13) = 1;
    goto LAB134;

LAB133:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB134;

LAB135:    xsi_set_current_line(79, ng0);

LAB138:    xsi_set_current_line(80, ng0);
    t30 = (t0 + 3976);
    t32 = (t30 + 56U);
    t46 = *((char **)t32);
    t47 = ((char*)((ng10)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 4, t46, 4, t47, 4);
    t54 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t54, t33, 0, 0, 4, 0LL);
    goto LAB137;

}

static void Cont_85_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
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
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
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
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2776U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng11)));
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

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t79 = (t0 + 5816);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memcpy(t83, t3, 8);
    xsi_driver_vfirst_trans(t79, 0, 31);
    t84 = (t0 + 5720);
    *((int *)t84) = 1;

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

LAB12:    t33 = (t0 + 3656);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 2776U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng12)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 3816);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t78 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

}

static void Cont_87_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3976);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB5;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 5880);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 5736);
    *((int *)t54) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng10)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}


extern void work_m_06105019882160045375_4111503280_init()
{
	static char *pe[] = {(void *)Always_45_0,(void *)Cont_85_1,(void *)Cont_87_2};
	xsi_register_didat("work_m_06105019882160045375_4111503280", "isim/mips_txt_isim_beh.exe.sim/work/m_06105019882160045375_4111503280.didat");
	xsi_register_executes(pe);
}
