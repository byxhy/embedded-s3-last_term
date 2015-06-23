/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : fifo_write.c
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
 * \brief make a FIFO special file (a named pipe)
 */

#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * \brief main entry
 */      
   
void main(void)
{
    int fd;

    /* create fifo file */
    mkfifo("./fifo", 0664);

    /* open the fifo file */
    fd = open("./fifo", O_WRONLY);

    /* write data to fifo file */
    write(fd, "Xhy Tech", 9);

    close(fd);
}

/* end of file */