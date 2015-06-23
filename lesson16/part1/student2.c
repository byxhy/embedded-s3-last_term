/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : student2.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 05-04-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief 
 */
 
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * \brief main entry
 */      
 
void main(void)
{
    int fd = 0;

    /* 1.open the board */
    fd = open("./board.txt", O_RDWR|O_APPEND);

    /* 2.write data to board */
    write(fd, "english exam is cancel", 20);

    /* 3.close the board */
    close(fd);  
}

/* end of file */