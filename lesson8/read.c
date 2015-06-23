/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : read.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 04-23-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief read file
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
    int fd = 0;
    
    char buf[100] = {0};

    /* open the file */
    fd = open("./read.txt", O_RDWR);

    if (fd < 0) 
        printf("Failed to open the file !\n");
    else
        printf("File is found !\n");

    /* read file*/
    read(fd, buf, 100);
    
    printf("\nWords from read.txt is :\n%s\n", buf);

    /* close file */
    close(fd);
}

/* end of file */