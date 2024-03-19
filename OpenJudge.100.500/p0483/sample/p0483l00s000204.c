#include <stdio.h>


int main(void){

    int N,flag;

    scanf("%d", &N);

    flag = N%10;
    N -=flag;
    if(flag==7){
        printf("Yes");
        return 0;
    }

    flag = N%100/10;
    N -= flag;
    if(flag==7){
        printf("Yes");
        return 0;
    }
    flag = N%1000/100;
    if(flag==7){
        printf("Yes");
        return 0;
    }

    printf("No");

    return 0;

}