/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : localtime.c
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
 * \brief converts the calendar time timep to broken-time
 *        representation, expressed relative to the 
 *        user’s  specified  time-zone. 
 */

#include <stdio.h>
#include <time.h>

/**
 * \brief main entry
 */

void main(void)
{
    time_t ctime;

    struct tm *localtm;
    
    ctime = time(NULL);

    printf("CTime is : %d\n", ctime);

    localtm = localtime(&ctime);

    printf("Now is %d:%d:%d\n", localtm->tm_hour,localtm->tm_min,localtm->tm_sec);

}

/* end of file */