/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : fread.c
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
 * \brief read the file
 */

#include <stdio.h>

/**
 * \brief main entry
 */

int main(void)
{
    FILE *fp;

    int count = 0;

    char c_buf[15] = {0};

    /**
     * if the file already exists, 
     * can't use the "w+",        
     * the file will be truncated.
     */
    /* open the file */
    fp = fopen("./tst.txt", "r+");

    if (NULL == fp)
        printf("Failed to open the file !\n");
    else
        printf("File is found !\n");
    
    /**          
     * if 15 < = count -->(c_buf[15]),
     * it woule be "Segment fault".
     */
    /* read the file */
    count = fread(c_buf, 1, 10, fp);

    c_buf[count] = '\0';

    printf("\nText is : %s\n", c_buf);

    /* close the file */
    fclose(fp);

    return 0;
}

/* end of file */