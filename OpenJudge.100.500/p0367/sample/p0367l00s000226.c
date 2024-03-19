#include <stdio.h>

int main(){
    int a,b,c;
    int i = 0;
    int counter = 0;
    
    scanf( "%d%d%d", &a, &b, &c );
    for( i = 0;i <= c; ++i ){
        if ( i >= a && i <= b && c % i == 0 ){ 
            counter++;
        }
    }
    printf( "%d\n",counter );
    return 0;
}