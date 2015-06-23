/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : open.c
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
 * \brief open file
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <fcntl.h>

/**
 * \brief main entry
 */

void main(void)
{
    int fd = 0;

    /* open the file */
    fd = open("./tst.txt", O_RDWR | O_CREAT, 0644);

    if (fd < 0) 
        printf("Failed to open the file !\n");
    else
        printf("File already exists !\n");
}

/* end of file */