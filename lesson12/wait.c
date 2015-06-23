/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : wait.c
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
 * \brief wait for process to change state
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * \brief main entry
 */      
   
void main(void)
{
    pid_t pid;

    pid = fork();

    /* parent process */
    if (pid > 0) {
        wait(NULL);
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