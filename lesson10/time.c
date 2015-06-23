/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : time.c
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
 * \brief get time in seconds
 */

#include <stdio.h>
#include <time.h>

/**
 * \brief main entry
 */

void main(void)
{
    time_t ctime;

    /**
     *returns  the  time  since  
     *the  Epoch (00:00:00 UTC, January 1,
         *1970), measured in seconds.
         */
    ctime = time(NULL);

    if (-1 == ctime)
        printf("Get time failed !\n");
    else
        printf("CTime is : %d\n", ctime);
        printf("CTime is : %d\n", t);   
}

/* end of file */