/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : tax.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 04-21-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  
 */
 
#include <stdio.h>

int tax(int salary, int insurance)
{
    int tax_salary = salary - insurance;
    int tmp = tax_salary - 3500;

    if (tmp < 0) {
        return 0;
    } else {
        if (tmp <= 1500) {
            return (tmp*0.03 - 0);
        }

        if ((tmp > 1500) && (tmp <= 4500)) {
            return (tmp*0.1 - 105);
        }

        if ((tmp > 4500) && (tmp <= 9000)) {
            return (tmp*0.2 - 555);
        }

        if ((tmp > 9000) && (tmp <= 35000)) {
            return (tmp*0.25 - 1005);
        }

        if ((tmp > 35000) && (tmp <= 55000)) {
            return (tmp*0.3 - 2755);
        }

        if ((tmp > 55000) && (tmp <= 80000)) {
            return (tmp*0.35 - 5505);
        }

        if (tmp > 80000) {
            return (tmp*0.45 - 13505);
        }
    }
}

/* end of file */














