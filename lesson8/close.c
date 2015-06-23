/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : close.c
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
 * \brief close file
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

    /* create the file */
    fd = creat("./tst.txt", 0664);

    if (fd < 0) 
        printf("Failed to open the file !\n");
    else
        printf("File already exists !\n");

    /* close file */
    close(fd);
}

/* end of file */