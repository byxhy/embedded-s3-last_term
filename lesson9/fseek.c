/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : fseek.c
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
 * \brief sets the file position indicator 
 */

#include <stdio.h>

/**
 * \brief main entry
 */

int main(void)
{
    FILE *fp;

    char *c_buf = "fwrite";
    
    /* open the file */
    fp = fopen("./tst.txt", "r+");

    if (NULL == fp)
        printf("Failed to open the file !\n");
    else
        printf("File is found !\n");

    /* repositions the offset */
    fseek(fp, 0, SEEK_END);

    /* write to file */
    fwrite(c_buf, 6, 1, fp);

    /* close the file */
    fclose(fp);

    return 0;
}

/* end of file */