/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : fork.c
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
 * \brief create a child process
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * \brief main entry
 */      
   
int main(void)
{
    pid_t pid;

    pid = fork(); /* compare with vfork */

    /* parent process */
    if (pid > 0) {
        printf(" This is parent process ! \n");
        exit(0);
    }

    /* child process */
    else if (0 == pid) {
        printf(" This is child process !\n");
        exit(0);
    }   
}

/* end of file */