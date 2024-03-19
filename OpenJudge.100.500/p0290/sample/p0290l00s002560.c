/* 
 * File:   main.c
 * Author: s1252007
 *
 * Created on June 15, 2018, 12:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int checkPrime(int b);

int main(int argc, char** argv) {
    int size, counter = 0;
    int *A;
    
    scanf("%d", &size);
    A = (int *)malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &A[i]);
        if (checkPrime(A[i])) counter++;
    }
    
    printf("%d\n", counter);
    
    return (EXIT_SUCCESS);
}

int checkPrime ( int b )
{
    int a = 0;
    int i = 1;
    while( i <= b / i )
    {
        if( b % i == 0 ) 
        {
            a = a + i + (b/i);
        }
        i++;
    }
    if ( a == b+1 ) return 1; //Is Prime
    return 0; //Not Prime
}

