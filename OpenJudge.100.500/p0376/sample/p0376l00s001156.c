#include <stdio.h>
int main(){
    int n;
    int i;
    int* list;

    scanf( "%d", &n );
    
    list = ( int* )malloc( sizeof( int ) * n );
    
    for( i = 0; i < n; i++ ){
        scanf( "%d", list + i );
    }

    for( i = 1; i < n; i++ ){
        printf( "%d ", *( list + n - i ));
    }
    printf( "%d\n", *list );
    return 0;
}
