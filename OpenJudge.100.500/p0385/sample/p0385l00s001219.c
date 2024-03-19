#include <stdio.h>

int main(void){
    long work = 0;
    int sum = 0;

    do{
        scanf("%d",&work);
        if(work == 0){
            break;
        }
        while(work != 0){
            sum += work % 10;
            work /= 10;
        }
        printf("%d\n",sum);
        work = sum = 0;
    }while(1);
    return 0;
}