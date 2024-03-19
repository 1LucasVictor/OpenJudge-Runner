/* ABC144-B
   Takatan */

#include<stdio.h>
int main(void){
    int number, i;

    scanf( "%d" , &number);
    for(i=1; i <= 9; i++){
        if(number%i==0 && number/i>=1 && number/i<=9){
            printf( "Yes\n" ); /* 九九の範囲にあったとき */
            return 0;
        }
    }
    printf( "No\n" );
    return 0;
}