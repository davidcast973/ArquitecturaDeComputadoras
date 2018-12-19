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

char *STD_STANDARD;
char *IEEE_P_3564397177;
char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *WORK_P_2426235125;
char *WORK_P_0434211292;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_0434211292_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_p_2426235125_init();
    work_a_3175194644_3142100031_init();
    work_a_4183574008_3004370712_init();
    work_a_1533682825_1818502257_init();
    work_a_1119858505_2416969983_init();
    work_a_0015290733_2131726652_init();
    work_a_3222946569_1948514065_init();
    work_a_3394192484_3481608693_init();
    work_a_3866575812_0688658848_init();
    work_a_2778653635_1596818117_init();
    work_a_3813779125_0650262854_init();
    work_a_3095333820_1757185944_init();
    work_a_2633026061_2496211035_init();
    work_a_1145492304_3337789384_init();
    work_a_0991361627_2394759832_init();
    work_a_3107243474_2372691052_init();


    xsi_register_tops("work_a_3107243474_2372691052");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    WORK_P_2426235125 = xsi_get_engine_memory("work_p_2426235125");
    WORK_P_0434211292 = xsi_get_engine_memory("work_p_0434211292");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");

    return xsi_run_simulation(argc, argv);

}