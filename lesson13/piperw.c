/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : piperw.c
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
 * \brief create pipe
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * \brief main entry
 */      

void main(void)
{
    pid_t pid;

    int pipefd[2];

    char c_buf[10];

    int count = 0;

    /* 2.create pipe */
    pipe(pipefd);

    /* 1.create child process */
    pid = fork();

    /* parent process */
    if (pid > 0) {
        write(pipefd[1], "Xhy Tech", 8);
        wait(NULL);
        close(pipefd[1]);

        printf("This is parent process ! \n");
        exit(0);
    }

    /* child process */
    else if (0 == pid) {
        count = read(pipefd[0], c_buf, 8);
        c_buf[count] = '\0';
        printf("Child read is %s\n", c_buf);

        printf("This is child process  ! \n");
        close(pipefd[0]);

        exit(0);
    }   
}

/* end of file */
