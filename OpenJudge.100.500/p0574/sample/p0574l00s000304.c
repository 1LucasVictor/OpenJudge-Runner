/* ex4-4
   takayanagi.y.aa
   Yuta Takayanagi  */

#include<stdio.h>
int main(void){
    int number, bit1, bit2, i;

    scanf( "%d" , &number);

    bit1 = number % 10;
    number = (number - bit1) / 10;

    for(i=0; i < 3; i++){

        bit2 = number % 10;
        number = (number - bit2) / 10;

        if(bit1==bit2){

            printf( "Bad\n" );

            return 0;

        }

        bit1 = bit2;

    }

    printf( "Good\n" );

    return 0;

}