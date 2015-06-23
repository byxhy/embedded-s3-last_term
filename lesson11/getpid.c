/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : getpid.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 05-02-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief execute a file
 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * \brief main entry
 */      
  
void main(void)
{
    int id = 0;

    id = getpid();

    printf("Process id is %d\n", id);
}

/* end of file */