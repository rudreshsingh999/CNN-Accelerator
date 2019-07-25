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
static const char *ng0 = "C:/Users/Lenovo/Downloads/PSProj/Convolution/Convolution.srcs/sources_1/new/select.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Initial_7_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(7, ng0);

LAB2:    xsi_set_current_line(8, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = (t0 + 1720);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 12);

LAB1:    return;
}

static void Always_11_1(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3208);
    *((int *)t2) = 1;
    t3 = (t0 + 2920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 608);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t8, 32, t7, 32);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB6:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB9;

LAB8:    *((unsigned int *)t10) = 1;

LAB9:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 12, t4, 12, t5, 12);
    t6 = (t0 + 1720);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 12);

LAB13:    goto LAB2;

LAB7:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(14, ng0);

LAB14:    xsi_set_current_line(15, ng0);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 1720);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 12);
    goto LAB13;

}


extern void work_m_00000000003870228695_0745121918_init()
{
	static char *pe[] = {(void *)Initial_7_0,(void *)Always_11_1};
	xsi_register_didat("work_m_00000000003870228695_0745121918", "isim/Master_tb_isim_beh.exe.sim/work/m_00000000003870228695_0745121918.didat");
	xsi_register_executes(pe);
}
