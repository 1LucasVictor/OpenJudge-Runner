#include<stdio.h>


int main(void){
    int D, N, a;
    int count = 0;
    int i = 0;
    scanf("%d %d", &D, &N);
    do{
        i++;

        if(D == 1){
            if(i >= 100){
            a = i % 100;
            if(a == 0){
                count++;
            }
            }
        }else if(D == 2){
            if(i >= 10000){
            a = i % 10000;
            if(a == 0){
                count++;
            }
        }
        }else{
            count++;
        }

    }while (count<N);
    printf("%d\n", i);

    return 0;
}