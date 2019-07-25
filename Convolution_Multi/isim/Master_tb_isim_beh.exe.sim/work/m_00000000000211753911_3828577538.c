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
static const char *ng0 = "C:/Users/Lenovo/Downloads/PSProj/Convolution/Convolution.srcs/sources_1/new/demux.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_12_0(char *t0)
{

LAB0:    xsi_set_current_line(13, ng0);

LAB2:
LAB1:    return;
}

static void Always_16_1(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;

LAB0:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3848);
    *((int *)t2) = 1;
    t3 = (t0 + 3560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1720);
    t4 = (t0 + 1720);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = (t0 + 1320U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng2)));
    xsi_vlog_convert_indexed_partindices(t6, t7, t8, ((int*)(t9)), 2, t11, 12, 2, t10, 32, 1, 1);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    t23 = *((unsigned int *)t8);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t7);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t7), t28);
    goto LAB7;

}


extern void work_m_00000000000211753911_3828577538_init()
{
	static char *pe[] = {(void *)Initial_12_0,(void *)Always_16_1};
	xsi_register_didat("work_m_00000000000211753911_3828577538", "isim/Master_tb_isim_beh.exe.sim/work/m_00000000000211753911_3828577538.didat");
	xsi_register_executes(pe);
}
