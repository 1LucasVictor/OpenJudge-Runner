/*  ex3_4
    kosaq       */

#include <stdio.h>

int main(void){
    int number;    // the number of N
    int i;    //count how many times it looped
    scanf("%d", &number);    //input N

    for(i = 1; i < 10; i++){
        if(number % i == 0 && number / i < 10){    //N can devide into two numbers(1 ~ 9)
            printf("Yes\n");    //output Yes
            break;
        }
    }
    if(i == 10){    //if N can't devide 
        printf("No\n");    //output No
    }
    return 0;
}

