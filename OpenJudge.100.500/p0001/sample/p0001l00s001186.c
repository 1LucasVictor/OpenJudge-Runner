#include <stdio.h> 
#include <stdlib.h> 
 
int alg ( int a, int b ) 
{ 
    int src = a + b;                                                                   
    int result = 0;  
 
    do  
    {   
        result++; 
    } while ( (src /= 10) != 0 );  
 
    return result; 
} 
 
int main ( void ) 
{ 
    int a, b;  
 
    while ( scanf( "%d %d", &a, &b ) != EOF ) 
    {   
        printf( "%d\n", alg( a, b ) );  
    }   
 
    return 0;  
} 