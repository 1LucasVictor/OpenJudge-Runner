#include<stdio.h>

int main(void){

    int H, N;
    int kind[10000];
    int i;
    int sum=0;
    
    scanf("%d %d", &H, &N);

    for(int i=0;i<N;i++){
        scanf("%d", &kind[i]);
        sum+=kind[i];
    }
    for(i=N;i<10000;i++){
        kind[i] = 0;
    }

    if(sum >= H){
        printf("Yes");
    }
    else{
        printf("No");
    }


    return 0;
}