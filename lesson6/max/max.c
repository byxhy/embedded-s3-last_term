/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : max.c
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

/**
 * \brief main entry
 */      
 
int max(int a, int b, int c)
{
    int max_num = 0;

    max_num = (a >= b) ? a : b;
    max_num = (max_num >= c) ? max_num : c;

    return max_num;   
}

/* end of file */