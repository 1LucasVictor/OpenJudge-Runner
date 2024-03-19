#include<stdio.h>


int main(void){
    int D, N, a;
    int count = 0;
    int i = 0;
    scanf("%d %d", &D, &N);
    do{
        i++;

        if(N == 100){
            if(D == 0 || D == 1){
                D++;
            }
        }
        if(D == 1){
            a = i % 100;
            if(a == 0){
                count++;
            }
        }else if(D == 2){
            
            a = i % 10000;
            if(a == 0){
                count++;
            }
        
        }else{
            count++;
        }

    }while (count<N);
    printf("%d\n", i);

    return 0;
}