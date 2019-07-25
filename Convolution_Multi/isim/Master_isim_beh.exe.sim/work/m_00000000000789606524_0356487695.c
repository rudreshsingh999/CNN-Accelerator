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
static const char *ng0 = "C:/Users/Lenovo/Downloads/PSProj/Convolution/Convolution.srcs/sources_1/new/muxmod.v";
static int ng1[] = {0, 0, 0, 0, 0, 0};
static int ng2[] = {72, 0};



static void Initial_8_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(8, ng0);

LAB2:    xsi_set_current_line(9, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2152);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 72);

LAB1:    return;
}

static void Always_12_1(char *t0)
{
    char t4[24];
    char t12[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t15;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3640);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    t5 = (t0 + 1712U);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1592U);
    t10 = *((char **)t9);
    t9 = (t0 + 744);
    t11 = *((char **)t9);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_multiply(t12, 32, t10, 12, t11, 32);
    t9 = (t0 + 608);
    t13 = *((char **)t9);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t12, 32, t13, 32);
    t9 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t4, 72, t6, ((int*)(t8)), 2, t14, 32, 2, t9, 32, 1, 1);
    t15 = (t0 + 2152);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 72);
    goto LAB2;

}


extern void work_m_00000000000789606524_0356487695_init()
{
	static char *pe[] = {(void *)Initial_8_0,(void *)Always_12_1};
	xsi_register_didat("work_m_00000000000789606524_0356487695", "isim/Master_isim_beh.exe.sim/work/m_00000000000789606524_0356487695.didat");
	xsi_register_executes(pe);
}
