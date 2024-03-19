/* 
 * File:   main.c
 * Author: s1252006
 *
 * Created on June 15, 2018, 11:02 AM
 */

#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b) {
    int temp = 0;
    
    while (b != 0) {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        // here, a <= b
        b = b % a;
    }
    return a;
    
}

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d", gcd(a,b));
    
    return (EXIT_SUCCESS);
}


