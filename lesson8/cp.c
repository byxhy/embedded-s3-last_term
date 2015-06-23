/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : cp.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 04-24-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  copy file
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <fcntl.h>
#include <unistd.h>

/**
 * \brief main entry
 */

void main(int argc, char **argv)
{
    int fd_s  = 0;
    int fd_d  = 0;

    int count = 0;

    char buf[512] = {0};

        /* 1.open the source file */
    fd_s = open(argv[1], O_RDONLY);

    /* 2.open the destination file */
    fd_d = open(argv[2], O_RDWR | O_CREAT, 0664);

    /* 3.read the source file */
    /* 4.write to destination file */
    while((count = read(fd_s, buf, 512)) > 0) {
        /* write count bytes not 512 */
        write(fd_d, buf, count);
    }

    /* close file */
    close(fd_s);
    close(fd_d);
}

/* end of file */