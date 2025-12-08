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



static void Always_46_0(char *t0)
{
    char t13[8];
    char t19[8];
    char t43[16];
    char t44[16];
    char t45[16];
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
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t46;
    unsigned int t47;
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

LAB0:    t1 = (t0 + 5048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5864);
    *((int *)t2) = 1;
    t3 = (t0 + 5080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
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

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3096U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(51, ng0);

LAB17:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 2776U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t19, 0, 8);
    t20 = (t12 + 4);
    t21 = (t11 + 4);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t11);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB21;

LAB18:    if (t31 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t19) = 1;

LAB21:    t35 = (t19 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t19);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(54, ng0);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB29;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t13) = 1;

LAB29:    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(56, ng0);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB37;

LAB34:    if (t18 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t13) = 1;

LAB37:    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(58, ng0);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t13) = 1;

LAB45:    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(60, ng0);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t13) = 1;

LAB53:    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(65, ng0);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB69;

LAB66:    if (t18 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t13) = 1;

LAB69:    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB70;

LAB71:
LAB72:
LAB56:
LAB48:
LAB40:
LAB32:
LAB24:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4136);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB139;

LAB138:    if (t18 != 0)
        goto LAB140;

LAB141:    t21 = (t13 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB142;

LAB143:
LAB144:    goto LAB16;

LAB20:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(52, ng0);

LAB25:    xsi_set_current_line(53, ng0);
    t41 = (t0 + 2456U);
    t42 = *((char **)t41);
    t41 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t41, t42, 0, 0, 32, 0LL);
    goto LAB24;

LAB28:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(54, ng0);

LAB33:    xsi_set_current_line(55, ng0);
    t20 = (t0 + 2456U);
    t21 = *((char **)t20);
    t20 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t20, t21, 0, 0, 32, 0LL);
    goto LAB32;

LAB36:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(56, ng0);

LAB41:    xsi_set_current_line(57, ng0);
    t20 = (t0 + 2456U);
    t21 = *((char **)t20);
    xsi_vlogtype_sign_extend(t43, 64, t21, 32);
    t20 = (t0 + 2616U);
    t34 = *((char **)t20);
    xsi_vlogtype_sign_extend(t44, 64, t34, 32);
    xsi_vlog_signed_multiply(t45, 64, t43, 64, t44, 64);
    t20 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t20, t45, 0, 0, 32, 0LL);
    t35 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t35, t45, 32, 0, 32, 0LL);
    goto LAB40;

LAB44:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(58, ng0);

LAB49:    xsi_set_current_line(59, ng0);
    t20 = (t0 + 2456U);
    t21 = *((char **)t20);
    t20 = (t0 + 2616U);
    t34 = *((char **)t20);
    xsi_vlog_unsigned_multiply(t43, 64, t21, 32, t34, 32);
    t20 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t20, t43, 0, 0, 32, 0LL);
    t35 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t35, t43, 32, 0, 32, 0LL);
    goto LAB48;

LAB52:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(60, ng0);

LAB57:    xsi_set_current_line(61, ng0);
    t20 = (t0 + 2616U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t34 = (t21 + 4);
    t35 = (t20 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t20);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t34);
    t33 = *((unsigned int *)t35);
    t36 = (t32 ^ t33);
    t37 = (t31 | t36);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t35);
    t40 = (t38 | t39);
    t46 = (~(t40));
    t47 = (t37 & t46);
    if (t47 != 0)
        goto LAB59;

LAB58:    if (t40 != 0)
        goto LAB60;

LAB61:    t42 = (t19 + 4);
    t48 = *((unsigned int *)t42);
    t49 = (~(t48));
    t50 = *((unsigned int *)t19);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB62;

LAB63:
LAB64:    goto LAB56;

LAB59:    *((unsigned int *)t19) = 1;
    goto LAB61;

LAB60:    t41 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(61, ng0);

LAB65:    xsi_set_current_line(62, ng0);
    t54 = (t0 + 2456U);
    t55 = *((char **)t54);
    t54 = (t0 + 2616U);
    t57 = *((char **)t54);
    memset(t58, 0, 8);
    xsi_vlog_signed_mod(t58, 32, t55, 32, t57, 32);
    t54 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t54, t58, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    memset(t53, 0, 8);
    xsi_vlog_signed_divide(t53, 32, t3, 32, t4, 32);
    t2 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t2, t53, 0, 0, 32, 0LL);
    goto LAB64;

LAB68:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(65, ng0);

LAB73:    xsi_set_current_line(66, ng0);
    t20 = (t0 + 2616U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t34 = (t21 + 4);
    t35 = (t20 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t20);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t34);
    t33 = *((unsigned int *)t35);
    t36 = (t32 ^ t33);
    t37 = (t31 | t36);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t35);
    t40 = (t38 | t39);
    t46 = (~(t40));
    t47 = (t37 & t46);
    if (t47 != 0)
        goto LAB75;

LAB74:    if (t40 != 0)
        goto LAB76;

LAB77:    t42 = (t19 + 4);
    t48 = *((unsigned int *)t42);
    t49 = (~(t48));
    t50 = *((unsigned int *)t19);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB78;

LAB79:
LAB80:    goto LAB72;

LAB75:    *((unsigned int *)t19) = 1;
    goto LAB77;

LAB76:    t41 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(66, ng0);

LAB81:    xsi_set_current_line(67, ng0);
    t54 = (t0 + 2456U);
    t55 = *((char **)t54);
    t54 = (t0 + 2616U);
    t57 = *((char **)t54);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_mod(t53, 32, t55, 32, t57, 32);
    t54 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 32, 0LL);
    goto LAB80;

LAB82:    xsi_set_current_line(72, ng0);

LAB85:    xsi_set_current_line(73, ng0);
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
    t22 = (t17 ^ t18);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB89;

LAB86:    if (t26 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t13) = 1;

LAB89:    memset(t19, 0, 8);
    t21 = (t13 + 4);
    t29 = *((unsigned int *)t21);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t21) != 0)
        goto LAB92;

LAB93:    t35 = (t19 + 4);
    t36 = *((unsigned int *)t19);
    t37 = (!(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB94;

LAB95:    memcpy(t58, t19, 8);

LAB96:    t97 = (t58 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t58);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(75, ng0);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB115;

LAB112:    if (t18 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t13) = 1;

LAB115:    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t12) != 0)
        goto LAB118;

LAB119:    t21 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (!(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB120;

LAB121:    memcpy(t58, t19, 8);

LAB122:    t83 = (t58 + 4);
    t91 = *((unsigned int *)t83);
    t93 = (~(t91));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB134;

LAB135:
LAB136:
LAB110:    goto LAB84;

LAB88:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t19) = 1;
    goto LAB93;

LAB92:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB93;

LAB94:    t41 = (t0 + 2776U);
    t42 = *((char **)t41);
    t41 = ((char*)((ng5)));
    memset(t53, 0, 8);
    t54 = (t42 + 4);
    t55 = (t41 + 4);
    t40 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t41);
    t47 = (t40 ^ t46);
    t48 = *((unsigned int *)t54);
    t49 = *((unsigned int *)t55);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t54);
    t59 = *((unsigned int *)t55);
    t60 = (t52 | t59);
    t61 = (~(t60));
    t62 = (t51 & t61);
    if (t62 != 0)
        goto LAB100;

LAB97:    if (t60 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t53) = 1;

LAB100:    memset(t56, 0, 8);
    t63 = (t53 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t53);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t63) != 0)
        goto LAB103;

LAB104:    t70 = *((unsigned int *)t19);
    t71 = *((unsigned int *)t56);
    t72 = (t70 | t71);
    *((unsigned int *)t58) = t72;
    t73 = (t19 + 4);
    t74 = (t56 + 4);
    t75 = (t58 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB105;

LAB106:
LAB107:    goto LAB96;

LAB99:    t57 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB100;

LAB101:    *((unsigned int *)t56) = 1;
    goto LAB104;

LAB103:    t69 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB104;

LAB105:    t81 = *((unsigned int *)t58);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t58) = (t81 | t82);
    t83 = (t19 + 4);
    t84 = (t56 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (~(t85));
    t87 = *((unsigned int *)t19);
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
    goto LAB107;

LAB108:    xsi_set_current_line(73, ng0);

LAB111:    xsi_set_current_line(74, ng0);
    t103 = ((char*)((ng8)));
    t104 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t104, t103, 0, 0, 4, 0LL);
    goto LAB110;

LAB114:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t19) = 1;
    goto LAB119;

LAB118:    t20 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB119;

LAB120:    t34 = (t0 + 2776U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng7)));
    memset(t53, 0, 8);
    t41 = (t35 + 4);
    t42 = (t34 + 4);
    t33 = *((unsigned int *)t35);
    t36 = *((unsigned int *)t34);
    t37 = (t33 ^ t36);
    t38 = *((unsigned int *)t41);
    t39 = *((unsigned int *)t42);
    t40 = (t38 ^ t39);
    t46 = (t37 | t40);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB126;

LAB123:    if (t49 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t53) = 1;

LAB126:    memset(t56, 0, 8);
    t55 = (t53 + 4);
    t52 = *((unsigned int *)t55);
    t59 = (~(t52));
    t60 = *((unsigned int *)t53);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t55) != 0)
        goto LAB129;

LAB130:    t64 = *((unsigned int *)t19);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    *((unsigned int *)t58) = t66;
    t63 = (t19 + 4);
    t69 = (t56 + 4);
    t73 = (t58 + 4);
    t67 = *((unsigned int *)t63);
    t68 = *((unsigned int *)t69);
    t70 = (t67 | t68);
    *((unsigned int *)t73) = t70;
    t71 = *((unsigned int *)t73);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB131;

LAB132:
LAB133:    goto LAB122;

LAB125:    t54 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t56) = 1;
    goto LAB130;

LAB129:    t57 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB130;

LAB131:    t76 = *((unsigned int *)t58);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t58) = (t76 | t77);
    t74 = (t19 + 4);
    t75 = (t56 + 4);
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t19);
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
    goto LAB133;

LAB134:    xsi_set_current_line(75, ng0);

LAB137:    xsi_set_current_line(76, ng0);
    t84 = ((char*)((ng9)));
    t97 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t97, t84, 0, 0, 4, 0LL);
    goto LAB136;

LAB139:    *((unsigned int *)t13) = 1;
    goto LAB141;

LAB140:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(80, ng0);

LAB145:    xsi_set_current_line(81, ng0);
    t34 = (t0 + 4136);
    t35 = (t34 + 56U);
    t41 = *((char **)t35);
    t42 = ((char*)((ng10)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 4, t41, 4, t42, 4);
    t54 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t54, t19, 0, 0, 4, 0LL);
    goto LAB144;

}

static void Cont_86_1(char *t0)
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

LAB0:    t1 = (t0 + 5296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
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

LAB20:    t79 = (t0 + 5976);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memcpy(t83, t3, 8);
    xsi_driver_vfirst_trans(t79, 0, 31);
    t84 = (t0 + 5880);
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

LAB12:    t33 = (t0 + 3816);
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

LAB29:    t71 = (t0 + 3976);
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

static void Cont_88_2(char *t0)
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

LAB0:    t1 = (t0 + 5544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4136);
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

LAB20:    t41 = (t0 + 6040);
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
    t54 = (t0 + 5896);
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


extern void work_m_00711891242915031213_4111503280_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Cont_86_1,(void *)Cont_88_2};
	xsi_register_didat("work_m_00711891242915031213_4111503280", "isim/mips_isim_beh.exe.sim/work/m_00711891242915031213_4111503280.didat");
	xsi_register_executes(pe);
}
