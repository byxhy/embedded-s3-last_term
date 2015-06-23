/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : gettimeofday.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 04-29-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief get and set the time
 *        as well as a timezone.
 */

#include <stdio.h>
#include <time.h>
#include <sys/time.h>

/**
 * \brief main entry
 */

void main(void)
{
    struct timeval tv;

    gettimeofday(&tv, NULL);
    
    printf("Sec  is : %d\n", tv.tv_sec);
    printf("Usec is : %d\n", tv.tv_usec);
}

/* end of file */        