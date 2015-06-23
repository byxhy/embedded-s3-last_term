/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : position.c
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
 * \brief repositions the offset of the open file 
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
    int  fd = 0;

    char *buf     = "How to write data to the file ?";
    char buff[40] = {0};

    fd = open("./position.txt", O_RDWR | O_CREAT, 0664);

    if (fd < 0) 
        printf("Failed to open the file !\n");
    else
        printf("File is found !\n");

    /* write to file */
    write(fd, buf, 31);

    /* set to 0 offset bytes */
    lseek(fd, 0, SEEK_SET);

    read(fd, buff, 31);

    printf("\nWords from position.txt is :\n%s\n", buff);

    /* close file */
    close(fd);
}

/* end of file */