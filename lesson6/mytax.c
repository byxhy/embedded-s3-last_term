/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : mytax.c
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
#include "tax.h"

/**
 * \brief main entry
 */      
 
void main(void)
{
    int my_tax = 0;

    my_tax = tax(8000, 1300);

    printf("I need tax  %d.\n",my_tax);
}

/* end of file */