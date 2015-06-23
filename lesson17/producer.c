/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : producer.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 05-07-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  bring out products
 */
 
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * \brief main entry
 */      
 
void main(void)
{
    int fd  = 0;
    int ret = 0;

    int semid = 0;  
    struct sembuf sops;
    int val   = 0;

    key_t key;

    /* create keynum */
    key = ftok("/home", 1);

    /* create the signal */
    semid = semget(key, 1, IPC_CREAT);
    semctl(semid, 0, SETVAL, 0);

    /* check the value */
    val = semctl(semid, 0, GETVAL);
    printf("value is %d\n", val);

    /* create the product */
    fd = open("./product.txt", O_RDWR|O_CREAT, 0664);

    /* sleep */
    sleep(5);

    /* fill in the product */
    write(fd, "The product is finished !", 25);

    /* close the product */
    close(fd);

    /* release the signal */
    sops.sem_num = 0;
    sops.sem_op  = 1;
    sops.sem_flg = SEM_UNDO;
    ret = semop(semid, &sops, 1);
    printf("semop = %d\n", ret);

    /* check the value */
    val = semctl(semid, 0, GETVAL);
    printf("value is %d\n", val);   
}

/* end of file */