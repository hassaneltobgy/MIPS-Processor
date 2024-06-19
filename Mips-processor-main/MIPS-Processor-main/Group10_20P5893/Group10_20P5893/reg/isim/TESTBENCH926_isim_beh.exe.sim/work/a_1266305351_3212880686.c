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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/LAB 2REG/reg/ADDER.vhd";
extern char *IEEE_P_0774719531;
extern char *IEEE_P_2592010699;

char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);


static void work_a_1266305351_3212880686_p_0(char *t0)
{
    char t1[16];
    char t12[16];
    char t25[16];
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(29, ng0);

LAB3:    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t4 = (32 - 1);
    t5 = (t4 - 31);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t2 = (t3 + t8);
    t9 = *((unsigned char *)t2);
    t10 = (t0 + 592U);
    t11 = *((char **)t10);
    t13 = ((IEEE_P_2592010699) + 2332);
    t14 = (t0 + 3108U);
    t10 = xsi_base_array_concat(t10, t12, t13, (char)99, t9, (char)97, t11, t14, (char)101);
    t15 = (t0 + 592U);
    t16 = *((char **)t15);
    t17 = (32 - 1);
    t18 = (t17 - 31);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t15 = (t16 + t21);
    t22 = *((unsigned char *)t15);
    t23 = (t0 + 684U);
    t24 = *((char **)t23);
    t26 = ((IEEE_P_2592010699) + 2332);
    t27 = (t0 + 3124U);
    t23 = xsi_base_array_concat(t23, t25, t26, (char)99, t22, (char)97, t24, t27, (char)101);
    t28 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t1, t10, t12, t23, t25);
    t29 = (t1 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    t32 = (33U != t31);
    if (t32 == 1)
        goto LAB5;

LAB6:    t33 = (t0 + 1988);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 33U);
    xsi_driver_first_trans_fast(t33);

LAB2:    t38 = (t0 + 1936);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t31, 0);
    goto LAB6;

}

static void work_a_1266305351_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(30, ng0);

LAB3:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (32 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 2024);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 1944);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1266305351_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1266305351_3212880686_p_0,(void *)work_a_1266305351_3212880686_p_1};
	xsi_register_didat("work_a_1266305351_3212880686", "isim/TESTBENCH926_isim_beh.exe.sim/work/a_1266305351_3212880686.didat");
	xsi_register_executes(pe);
}
