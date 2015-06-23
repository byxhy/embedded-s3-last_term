/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : dup.c
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
 * \brief create a copy of the file descriptor oldfd 
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <fcntl.h>
#include <unistd.h>

/**
 * \brief main entry
 */

void main(void)
{
    int fd_old  = 0;
    int fd      = 0;

    char *buf     = "How to write data to the file ?";
    char buff[40] = {0};

    fd_old = open("./dup.txt", O_RDWR | O_CREAT, 0664);

    if (fd_old < 0) 
        printf("Failed to open the file !\n");
    else
        printf("File is found !\n");

    /* copy of the file descriptor oldfd */
    fd = dup(fd_old);
    
    write(fd, buf, 31);

    lseek(fd, 0, SEEK_SET);

    read(fd, buff, 36);

    printf("\nWords from dup.txt is:\n%s\n", buff);

    /* close file */
    close(fd);
}

/* end of file */