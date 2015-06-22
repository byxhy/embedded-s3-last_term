/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : addr.c
 *
 *      Author     : X h y
 *
 *      Version    : 2.0
 *
 *      Date       : 04-19-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  
 */
 
#include <stdio.h>
#include <stdlib.h>

int global_init_a = 1;               //data
int global_uinit_a;                  //data

static int static_global_init_a =2;  //data
static int static_global__uinit_a;   //data

const int const_global_a = 3;        //code  

/**
 * \brief main entry
 */      
 
int main(void)
{
    int local_init_a = 4;        //stack
    int local_uinit_a;           //stack

    static int static_local_init_a =5;  //data
    static int static_local_uinit_a;    //data

    const int const_local_a = 6;        //stack

    int *malloc_p_a;                    
    malloc_p_a = malloc(sizeof(int));   //heap

    printf("&global_init_a = %p, global_init_a = %d\n", &global_init_a, global_init_a);
    printf("&global_uinit_a = %p, global_uinit_a = %d\n", &global_uinit_a, global_uinit_a);
    printf("&static_global_init_a = %p, static_global_init_a = %d\n", &static_global_init_a, static_global_init_a);
    printf("&static_global__uinit_a = %p, static_global__uinit_a = %d\n", &static_global__uinit_a, static_global__uinit_a);
    printf("&const_global_a = %p, const_global_a = %d\n", &const_global_a, const_global_a);
    
    printf("&local_init_a = %p, local_init_a = %d\n", &local_init_a, local_init_a);
    printf("&local_uinit_a = %p, local_uinit_a = %d\n", &local_uinit_a, local_uinit_a);
    printf("&static_local_init_a = %p, static_local_init_a = %d\n", &static_local_init_a, static_local_init_a);
    printf("&static_local_uinit_a = %p, static_local_uinit_a = %d\n", &static_local_uinit_a, static_local_uinit_a);
    printf("&const_local_a = %p, const_local_a = %d\n", &const_local_a, const_local_a);
    printf("malloc_p_a = %p, *malloc_p_a = %d\n", &*malloc_p_a, *malloc_p_a);

    while(1);
}

/* end of file */
