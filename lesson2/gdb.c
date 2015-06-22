/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : gdb.c
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

int EnterScore ( int P_array[] ) ;
void find ( int P_array[] , int count ) ;

/**
 * \brief main entry
 */      
 
int main ( void )
{ 
    int array[5] , count ; 
    EnterScore ( array ) ;   //count = EnterScore ( array ) ;
    find ( array , count ) ; 
    return 0 ;
}

int EnterScore ( int P_array[] )
{ 
    int count = 0 ; 
    do 
    {  
        printf ( "Enter students' score : \n" ) ;  
        scanf ( "%d" , &(P_array[count]) ) ;   //       scanf ( "%d" , P_array[count] ) ; 
        count++ ; 
    } while ( P_array[ count - 1 ] != -1 ) ; 
    return count ;
}

void find ( int P_array[] , int count )
{ 
    int x , y , i ; 
    printf ( "Enter the students' score's scope : \n" ) ; 
    scanf ( "%d,%d" , &x , &y ) ; 
    for ( i = 0 ; i < count ; i++ ) 
    {  
        if ( P_array[i] >= x && P_array[i] <= y )  
        {   
            printf ( "The score is %d.\n" , P_array[i] ) ;  
        } 
    }
}  

/* end of file */

