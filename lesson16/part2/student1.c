/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : student1.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 05-06-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  student1 write data to board.txt
 */
 
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/sem.h>

/**
 * \brief main entry
 */      
 
void main(void)
{
    int fd = 0;

    int semid = 0;  
    struct sembuf sops;
    int val   = 0;
    int ret   = 0;

    key_t key;

    /* create keynum */
    key = ftok("/home", 1);

    /* 1.create signal */
    semid = semget(key, 1, IPC_CREAT);

    /* 2.set the init value */
    semctl(semid, 0, SETVAL, 1);
    val = semctl(semid, 0, GETVAL);
    printf("student1 init value is %d\n", val);
    
    /* 3.open the board */
    fd = open("./board.txt", O_RDWR|O_APPEND);

    /* 4.get the signal */
    sops.sem_num = 0;
    sops.sem_op  = -1;
    semop(semid, &sops, 1);

    /* 5.check the value */
    val = semctl(semid, 0, GETVAL);
    printf("student1 init value is %d\n", val);

    /* 6.write data to board */
    write(fd, "class math", 10);

    /* 7.sleep 5 minutes */
    sleep(5);

    write(fd, " is cancel ", 11);

    /* 8.release the signal */
    sops.sem_num = 0;
    sops.sem_op  = 1;
    sops.sem_flg = SEM_UNDO;
    ret = semop(semid, &sops, 1);
    printf("semop = %d\n", ret);

    /* 9.check the value */
    val = semctl(semid, 0, GETVAL);
    printf("student1 init value is %d\n", val);//value = 0  because of student2 is runing.

    /* 10.close the board */
    close(fd);  
}

/* end of file */