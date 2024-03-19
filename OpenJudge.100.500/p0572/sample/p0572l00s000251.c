#include <stdio.h>
int main(void){
    int mi = 2019, i, j, L, R, l = 0;
    char str[1024];
    
    fgets( str, sizeof(str), stdin );
    sscanf( str,"%d %d", &L, &R) ;

    for( i = L; i < R; i++ ){
        for( j = i + 1; j < R + 1; j++ ){
            if( mi > i * j % 2019 ){
                mi = i * j % 2019;
            }
            if( mi == 0 ){
                l = 1;
                break;
            }
        }
        if( l == 1 ){
            break;
        }
    }
    
    printf( "%d\n", mi );
    
    return 0;
}