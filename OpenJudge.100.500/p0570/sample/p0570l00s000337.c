/* ABC135-A.c
   Takatan */

#include<stdio.h>
#include<math.h>

int main(void){
    int number1, number2;
    float answer;

    scanf( "%d %d" , &number1, &number2);
    answer = ((double)(number1+number2) )/ 2;
    if(floor(answer)==ceil(answer)){
        printf( "%1.f\n" , answer);
    }else{
        printf( "IMPOSSIBLE\n" );
    }
    return 0;
}