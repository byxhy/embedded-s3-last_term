/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : customer.c
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
 * \brief  get product
 */
 
#include <stdio.h>
#include <stdlib.h>
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
    
    int semid = 0;  
    struct sembuf sops;
    int val   = 0;
    int ret   = 0;

    key_t key;

    /* create keynum */
    key = ftok("/home", 1);
    semid = semget(key, 1, IPC_CREAT);
    
    /* get the signal */
    sops.sem_num = 0;
    sops.sem_op  = -1;
    sops.sem_flg = SEM_UNDO;
    ret = semop(semid, &sops, 1);
    printf("semop = %d\n", ret);

    /* check the value */
    val = semctl(semid, 0, GETVAL);
    printf("value is %d\n", val);

    /* take away the product */
    system("cp ./product.txt ./ship/");
}

/* end of file */