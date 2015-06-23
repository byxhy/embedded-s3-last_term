/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : write.c
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
 * \brief write to file
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
    
    char *buf = "How to write data to the file ?";

    /* open the file */
    fd = open("./write.txt", O_RDWR | O_CREAT, 0644);

    if (fd < 0) 
        printf("Failed to open the file !\n");
    else
        printf("File is found !\n");

    /* write to file */
    write(fd, buf, 31);

    printf("write succuess !\n");

    /* close file */
    close(fd);
}

/* end of file */