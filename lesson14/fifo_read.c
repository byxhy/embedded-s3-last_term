/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : fifo_read.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 05-03-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  remove the file FIFO special file (a named pipe)
 */

#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * \brief main entry
 */      
 
void main(void)
{
    int fd;

    char c_buf[15] = {0};

    /* open the fifo file */
    fd = open("./fifo", O_RDONLY);

    /* read the data from fifo file */
    read(fd, c_buf, 15);

    printf("Read : %s\n", c_buf);

    /* close the fifo file */
    close(fd);

    /* delete fifo file */
    unlink("./fifo");
}

/* end of file */