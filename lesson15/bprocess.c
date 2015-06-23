/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : bprocess.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 05-04-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief ANSI C signal handling
 */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void myfunc(int a)
{
    printf("Process B received SIGINT\n");
}

/**
 * \brief main entry
 */      
 
void main(void)
{
	signal(SIGINT, myfunc);

	pause();	
}

/* end of file */