/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : test.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 04-19-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  
 */
 
#include <stdio.h>

void myprint(long res)
{
    printf("res is %d\n",res);

}

/**
 * \brief main entry
 */      
 
void main(void)
{
    int   i = 0;
    long  result = 0;
    
    for(i=0; i<100; i++) {
        result += 1;
    }

    myprint(result);
}

/* end of file */