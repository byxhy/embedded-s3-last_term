/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : asctime.c
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
 * \brief take an argument representing broken-down time
 *        which is a representation separated into year,  
 *        month, day, etc. 
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

    char *stime;
    
    ctime = time(NULL);

    printf("CTime is : %d\n", ctime);

    localtm = localtime(&ctime);
    printf(" %d:%d:%d\n", localtm->tm_hour,localtm->tm_min,localtm->tm_sec);
    
    stime = asctime(localtm);
    printf("%s\n", stime);  
}

/* end of file */