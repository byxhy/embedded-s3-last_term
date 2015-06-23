/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : aprocess.c
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
 * \brief terminate a process and sent a SIGINT signal
 */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/**
 * \brief main entry
 */      
 
void main(int argc, char *argv[])
{
    pid_t pid;

    pid = atoi(argv[1]);

    /* terminate the process */
    kill(pid, SIGINT);  
}

/* end of file */