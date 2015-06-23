/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.   
 *
 *      FileName   : gmtime.c
 *
 *      Author     : X h y       
 *
 *      Version    : 2.0       
 *   
 *      Date       : 04-29-2015  
 *
 *      Description:     
 ********************************************************************************
 */

#include <stdio.h>
#include <time.h>

void main(void)
{

    time_t ctime;

    struct tm *tm;
    
    ctime = time(NULL);

    printf("CTime is : %d\n", ctime);

    tm = gmtime(&ctime);

    printf("sec : %d\n", tm->tm_sec);
    printf("min : %d\n", tm->tm_min);
    printf("hour: %d\n", tm->tm_hour);
    
    printf("mday: %d\n", tm->tm_mday);
    printf("mon : %d\n", tm->tm_mon);
    printf("year: %d\n", tm->tm_year);

    printf("wday: %d\n", tm->tm_wday);
    printf("yday: %d\n", tm->tm_yday);
    printf("dst : %d\n", tm->tm_isdst);
}