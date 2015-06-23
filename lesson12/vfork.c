/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : vfork.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 05-02-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief create a child process and block parent
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
     
void func(void)
{
    pid_t pid;

    int count = 0;

    pid = vfork(); /* compare with fork */

    count ++;

    printf("Count is %d\n", count);

    exit(0); /* compare with return 0 */    
} 

/**
 * \brief main entry
 */ 

void main(void)
{
    func(); 
}

/* end of file */
