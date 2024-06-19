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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_3564397177;
char *WORK_P_1789356946;
char *WORK_P_3886382950;
char *WORK_P_3981275001;
char *WORK_P_0032977886;
char *IEEE_P_1242562249;
char *WORK_P_3576666086;
char *IEEE_P_3499444699;
char *WORK_P_0149406617;
char *IEEE_P_3620187407;
char *WORK_P_0828682299;
char *WORK_P_2351400353;
char *IEEE_P_2592010699;
char *WORK_P_0196492412;
char *WORK_P_1706621293;
char *WORK_P_1101759590;
char *IEEE_P_0774719531;
char *WORK_P_0523688592;
char *STD_STANDARD;
char *WORK_P_0334935413;
char *STD_TEXTIO;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_p_2351400353_init();
    work_p_0523688592_init();
    work_p_0149406617_init();
    work_p_1706621293_init();
    work_p_0032977886_init();
    work_p_3576666086_init();
    work_p_3981275001_init();
    work_p_3886382950_init();
    work_p_0828682299_init();
    work_p_1101759590_init();
    work_p_0334935413_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_p_1789356946_init();
    work_p_0196492412_init();
    ieee_p_3620187407_init();
    work_a_1007874614_3212880686_init();
    work_a_0763730103_3212880686_init();
    work_a_2096391741_2372691052_init();
    work_a_1709586501_3212880686_init();
    work_a_2263464102_3212880686_init();
    work_a_3708388792_3212880686_init();
    work_a_2179276602_3212880686_init();
    work_a_0305289373_3212880686_init();
    work_a_0532180842_3212880686_init();
    work_a_3923250532_3212880686_init();
    work_a_4106131694_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_1215300100_3212880686_init();
    work_a_1266305351_3212880686_init();
    work_a_0431830435_3212880686_init();
    work_a_3919672569_2372691052_init();


    xsi_register_tops("work_a_3919672569_2372691052");

    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    WORK_P_1789356946 = xsi_get_engine_memory("work_p_1789356946");
    WORK_P_3886382950 = xsi_get_engine_memory("work_p_3886382950");
    WORK_P_3981275001 = xsi_get_engine_memory("work_p_3981275001");
    WORK_P_0032977886 = xsi_get_engine_memory("work_p_0032977886");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_3576666086 = xsi_get_engine_memory("work_p_3576666086");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_0149406617 = xsi_get_engine_memory("work_p_0149406617");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    WORK_P_0828682299 = xsi_get_engine_memory("work_p_0828682299");
    WORK_P_2351400353 = xsi_get_engine_memory("work_p_2351400353");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    WORK_P_0196492412 = xsi_get_engine_memory("work_p_0196492412");
    WORK_P_1706621293 = xsi_get_engine_memory("work_p_1706621293");
    WORK_P_1101759590 = xsi_get_engine_memory("work_p_1101759590");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    WORK_P_0523688592 = xsi_get_engine_memory("work_p_0523688592");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_0334935413 = xsi_get_engine_memory("work_p_0334935413");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");

    return xsi_run_simulation(argc, argv);

}
