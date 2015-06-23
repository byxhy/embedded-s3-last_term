/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : fopen.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 04-27-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief open the file
 */

#include <stdio.h>

/**
 * \brief main entry
 */

int main(void)
{
    FILE *fp;

    /**
     * The file is created if it does not exist,           
     * otherwise it is truncated.
     */
    fp = fopen("./tst.txt", "w+");

    if (NULL == fp)
        printf("Failed to open the file !\n");
    else
        printf("File already exists !\n");

    return 0;
}

/* end of file */