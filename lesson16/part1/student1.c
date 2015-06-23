/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : student1.c
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
    write(fd, "class math", 11);

    /* 3.sleep 5 minutes */
    sleep(5);

    write(fd, "is cancel", 11);

    /* 4.close the board */
    close(fd);
    
}

/* end of file */