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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/farida1004/reg/ALU.vhd";
extern char *IEEE_P_0774719531;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_0774719531_sub_2698824431_2162500114(char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1306069469_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t1[16];
    char t11[16];
    char t23[16];
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(29, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = (31 - 31);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t0 + 1032U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t0 + 8080U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)99, t8, (char)97, t10, t13, (char)101);
    t14 = (t0 + 1192U);
    t15 = *((char **)t14);
    t16 = (31 - 31);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = (t0 + 1192U);
    t22 = *((char **)t21);
    t24 = ((IEEE_P_2592010699) + 4024);
    t25 = (t0 + 8096U);
    t21 = xsi_base_array_concat(t21, t23, t24, (char)99, t20, (char)97, t22, t25, (char)101);
    t26 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t1, t9, t11, t21, t23);
    t27 = (t1 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (1U * t28);
    t30 = (33U != t29);
    if (t30 == 1)
        goto LAB5;

LAB6:    t31 = (t0 + 5776);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t26, 33U);
    xsi_driver_first_trans_fast(t31);

LAB2:    t36 = (t0 + 5600);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t29, 0);
    goto LAB6;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char t1[16];
    char t11[16];
    char t23[16];
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(30, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = (31 - 31);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t0 + 1032U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t0 + 8080U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)99, t8, (char)97, t10, t13, (char)101);
    t14 = (t0 + 1192U);
    t15 = *((char **)t14);
    t16 = (31 - 31);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = (t0 + 1192U);
    t22 = *((char **)t21);
    t24 = ((IEEE_P_2592010699) + 4024);
    t25 = (t0 + 8096U);
    t21 = xsi_base_array_concat(t21, t23, t24, (char)99, t20, (char)97, t22, t25, (char)101);
    t26 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t1, t9, t11, t21, t23);
    t27 = (t1 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (1U * t28);
    t30 = (33U != t29);
    if (t30 == 1)
        goto LAB5;

LAB6:    t31 = (t0 + 5840);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t26, 33U);
    xsi_driver_first_trans_fast(t31);

LAB2:    t36 = (t0 + 5616);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t29, 0);
    goto LAB6;

}

static void work_a_0832606739_3212880686_p_2(char *t0)
{
    char t5[16];
    char t11[16];
    char t28[16];
    char t34[16];
    char t51[16];
    char t69[16];
    char t87[16];
    char t105[16];
    char t123[16];
    char t129[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned char t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    unsigned char t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;
    unsigned char t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t88;
    char *t89;
    int t90;
    unsigned int t91;
    unsigned char t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t106;
    char *t107;
    int t108;
    unsigned int t109;
    unsigned char t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t124;
    char *t125;
    int t126;
    unsigned int t127;
    unsigned char t128;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned char t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 8112U);
    t3 = (t0 + 8351);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t24 = (t0 + 1352U);
    t25 = *((char **)t24);
    t24 = (t0 + 8112U);
    t26 = (t0 + 8355);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 0;
    t30 = (t29 + 4U);
    *((int *)t30) = 3;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t31 = (3 - 0);
    t32 = (t31 * 1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t33 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t25, t24, t26, t28);
    if (t33 != 0)
        goto LAB7;

LAB8:    t47 = (t0 + 1352U);
    t48 = *((char **)t47);
    t47 = (t0 + 8112U);
    t49 = (t0 + 8359);
    t52 = (t51 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = 0;
    t53 = (t52 + 4U);
    *((int *)t53) = 3;
    t53 = (t52 + 8U);
    *((int *)t53) = 1;
    t54 = (3 - 0);
    t55 = (t54 * 1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t56 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t48, t47, t49, t51);
    if (t56 != 0)
        goto LAB11;

LAB12:    t65 = (t0 + 1352U);
    t66 = *((char **)t65);
    t65 = (t0 + 8112U);
    t67 = (t0 + 8363);
    t70 = (t69 + 0U);
    t71 = (t70 + 0U);
    *((int *)t71) = 0;
    t71 = (t70 + 4U);
    *((int *)t71) = 3;
    t71 = (t70 + 8U);
    *((int *)t71) = 1;
    t72 = (3 - 0);
    t73 = (t72 * 1);
    t73 = (t73 + 1);
    t71 = (t70 + 12U);
    *((unsigned int *)t71) = t73;
    t74 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t66, t65, t67, t69);
    if (t74 != 0)
        goto LAB13;

LAB14:    t83 = (t0 + 1352U);
    t84 = *((char **)t83);
    t83 = (t0 + 8112U);
    t85 = (t0 + 8367);
    t88 = (t87 + 0U);
    t89 = (t88 + 0U);
    *((int *)t89) = 0;
    t89 = (t88 + 4U);
    *((int *)t89) = 3;
    t89 = (t88 + 8U);
    *((int *)t89) = 1;
    t90 = (3 - 0);
    t91 = (t90 * 1);
    t91 = (t91 + 1);
    t89 = (t88 + 12U);
    *((unsigned int *)t89) = t91;
    t92 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t84, t83, t85, t87);
    if (t92 != 0)
        goto LAB15;

LAB16:    t101 = (t0 + 1352U);
    t102 = *((char **)t101);
    t101 = (t0 + 8112U);
    t103 = (t0 + 8371);
    t106 = (t105 + 0U);
    t107 = (t106 + 0U);
    *((int *)t107) = 0;
    t107 = (t106 + 4U);
    *((int *)t107) = 3;
    t107 = (t106 + 8U);
    *((int *)t107) = 1;
    t108 = (3 - 0);
    t109 = (t108 * 1);
    t109 = (t109 + 1);
    t107 = (t106 + 12U);
    *((unsigned int *)t107) = t109;
    t110 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t102, t101, t103, t105);
    if (t110 != 0)
        goto LAB17;

LAB18:    t119 = (t0 + 1352U);
    t120 = *((char **)t119);
    t119 = (t0 + 8112U);
    t121 = (t0 + 8375);
    t124 = (t123 + 0U);
    t125 = (t124 + 0U);
    *((int *)t125) = 0;
    t125 = (t124 + 4U);
    *((int *)t125) = 3;
    t125 = (t124 + 8U);
    *((int *)t125) = 1;
    t126 = (3 - 0);
    t127 = (t126 * 1);
    t127 = (t127 + 1);
    t125 = (t124 + 12U);
    *((unsigned int *)t125) = t127;
    t128 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t120, t119, t121, t123);
    if (t128 != 0)
        goto LAB19;

LAB20:
LAB23:    t142 = xsi_get_transient_memory(32U);
    memset(t142, 0, 32U);
    t143 = t142;
    memset(t143, (unsigned char)4, 32U);
    t144 = (t0 + 5904);
    t145 = (t144 + 56U);
    t146 = *((char **)t145);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    memcpy(t148, t142, 32U);
    xsi_driver_first_trans_fast(t144);

LAB2:    t149 = (t0 + 5632);
    *((int *)t149) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t7 = (t0 + 8080U);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t13 = (t0 + 8096U);
    t15 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t11, t12, t7, t14, t13);
    t16 = (t11 + 12U);
    t9 = *((unsigned int *)t16);
    t17 = (1U * t9);
    t18 = (32U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 5904);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast(t19);
    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t17, 0);
    goto LAB6;

LAB7:    t30 = (t0 + 1032U);
    t35 = *((char **)t30);
    t30 = (t0 + 8080U);
    t36 = (t0 + 1192U);
    t37 = *((char **)t36);
    t36 = (t0 + 8096U);
    t38 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t34, t35, t30, t37, t36);
    t39 = (t34 + 12U);
    t32 = *((unsigned int *)t39);
    t40 = (1U * t32);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB9;

LAB10:    t42 = (t0 + 5904);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t38, 32U);
    xsi_driver_first_trans_fast(t42);
    goto LAB2;

LAB9:    xsi_size_not_matching(32U, t40, 0);
    goto LAB10;

LAB11:    t53 = (t0 + 2312U);
    t57 = *((char **)t53);
    t55 = (32 - 31);
    t58 = (t55 * 1U);
    t59 = (0 + t58);
    t53 = (t57 + t59);
    t60 = (t0 + 5904);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memcpy(t64, t53, 32U);
    xsi_driver_first_trans_fast(t60);
    goto LAB2;

LAB13:    t71 = (t0 + 2472U);
    t75 = *((char **)t71);
    t73 = (32 - 31);
    t76 = (t73 * 1U);
    t77 = (0 + t76);
    t71 = (t75 + t77);
    t78 = (t0 + 5904);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memcpy(t82, t71, 32U);
    xsi_driver_first_trans_fast(t78);
    goto LAB2;

LAB15:    t89 = (t0 + 2472U);
    t93 = *((char **)t89);
    t91 = (32 - 31);
    t94 = (t91 * 1U);
    t95 = (0 + t94);
    t89 = (t93 + t95);
    t96 = (t0 + 5904);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    memcpy(t100, t89, 32U);
    xsi_driver_first_trans_fast(t96);
    goto LAB2;

LAB17:    t107 = (t0 + 2472U);
    t111 = *((char **)t107);
    t109 = (32 - 31);
    t112 = (t109 * 1U);
    t113 = (0 + t112);
    t107 = (t111 + t113);
    t114 = (t0 + 5904);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    memcpy(t118, t107, 32U);
    xsi_driver_first_trans_fast(t114);
    goto LAB2;

LAB19:    t125 = (t0 + 1032U);
    t130 = *((char **)t125);
    t125 = (t0 + 8080U);
    t131 = (t0 + 1192U);
    t132 = *((char **)t131);
    t131 = (t0 + 8096U);
    t133 = ieee_p_2592010699_sub_1306069469_503743352(IEEE_P_2592010699, t129, t130, t125, t132, t131);
    t134 = (t129 + 12U);
    t127 = *((unsigned int *)t134);
    t135 = (1U * t127);
    t136 = (32U != t135);
    if (t136 == 1)
        goto LAB21;

LAB22:    t137 = (t0 + 5904);
    t138 = (t137 + 56U);
    t139 = *((char **)t138);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    memcpy(t141, t133, 32U);
    xsi_driver_first_trans_fast(t137);
    goto LAB2;

LAB21:    xsi_size_not_matching(32U, t135, 0);
    goto LAB22;

LAB24:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_3(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8160U);
    t3 = (t0 + 8379);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 31;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (31 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 5968);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 5648);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5968);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_4(char *t0)
{
    char t5[16];
    char t25[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 8112U);
    t3 = (t0 + 8411);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 1352U);
    t22 = *((char **)t21);
    t21 = (t0 + 8112U);
    t23 = (t0 + 8415);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 0;
    t27 = (t26 + 4U);
    *((int *)t27) = 3;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (3 - 0);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t30 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t22, t21, t23, t25);
    if (t30 != 0)
        goto LAB5;

LAB6:
LAB7:    t41 = (t0 + 6032);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 5664);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 2312U);
    t11 = *((char **)t7);
    t12 = (32 - 32);
    t9 = (t12 * -1);
    t13 = (1U * t9);
    t14 = (0 + t13);
    t7 = (t11 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 6032);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t27 = (t0 + 2472U);
    t31 = *((char **)t27);
    t32 = (32 - 32);
    t29 = (t32 * -1);
    t33 = (1U * t29);
    t34 = (0 + t33);
    t27 = (t31 + t34);
    t35 = *((unsigned char *)t27);
    t36 = (t0 + 6032);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t35;
    xsi_driver_first_trans_fast_port(t36);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_5(char *t0)
{
    char t5[16];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned char t43;
    char *t44;
    char *t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 8112U);
    t3 = (t0 + 8419);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t29 = (t0 + 1352U);
    t30 = *((char **)t29);
    t29 = (t0 + 8112U);
    t31 = (t0 + 8423);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 0;
    t35 = (t34 + 4U);
    *((int *)t35) = 3;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (3 - 0);
    t37 = (t36 * 1);
    t37 = (t37 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t37;
    t38 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t30, t29, t31, t33);
    if (t38 != 0)
        goto LAB5;

LAB6:
LAB7:    t57 = (t0 + 6096);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    *((unsigned char *)t61) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t57);

LAB2:    t62 = (t0 + 5680);
    *((int *)t62) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 2312U);
    t11 = *((char **)t7);
    t12 = (32 - 32);
    t9 = (t12 * -1);
    t13 = (1U * t9);
    t14 = (0 + t13);
    t7 = (t11 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 2312U);
    t17 = *((char **)t16);
    t18 = (31 - 32);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t15, t22);
    t24 = (t0 + 6096);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t23;
    xsi_driver_first_trans_fast_port(t24);
    goto LAB2;

LAB5:    t35 = (t0 + 2472U);
    t39 = *((char **)t35);
    t40 = (32 - 32);
    t37 = (t40 * -1);
    t41 = (1U * t37);
    t42 = (0 + t41);
    t35 = (t39 + t42);
    t43 = *((unsigned char *)t35);
    t44 = (t0 + 2472U);
    t45 = *((char **)t44);
    t46 = (31 - 32);
    t47 = (t46 * -1);
    t48 = (1U * t47);
    t49 = (0 + t48);
    t44 = (t45 + t49);
    t50 = *((unsigned char *)t44);
    t51 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t43, t50);
    t52 = (t0 + 6096);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    *((unsigned char *)t56) = t51;
    xsi_driver_first_trans_fast_port(t52);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 6160);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5696);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1,(void *)work_a_0832606739_3212880686_p_2,(void *)work_a_0832606739_3212880686_p_3,(void *)work_a_0832606739_3212880686_p_4,(void *)work_a_0832606739_3212880686_p_5,(void *)work_a_0832606739_3212880686_p_6};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/tbeee124333_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
