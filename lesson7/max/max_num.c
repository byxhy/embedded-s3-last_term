/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : max_num.c
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
#include "max.h"

/**
 * \brief main entry
 */      
 
int main(void)
{
    int max_num = 0;
    int a,b,c;
    a = b = c = 0;

    printf("Please input the three number:\n");
    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);

    printf("c = ");
    scanf("%d",&c);

    max_num = max(a, b, c);

    printf("The max number is %d.\n",max_num);

    return 0;
}

/* end of file */