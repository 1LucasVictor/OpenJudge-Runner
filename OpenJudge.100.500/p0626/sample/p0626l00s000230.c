#include<stdio.h>


int main(){
    int d , n ;
    int i;

    scanf("%d %d",&d,&n);

    if( d == 0 ){
        printf("%d\n",n);
    }
    else if ( d == 1 ){
        printf("%d\n", 100 * n );
    } 
    else {
        printf("%d\n", 100 * 100 * n );
    }       


    return 0 ;

}