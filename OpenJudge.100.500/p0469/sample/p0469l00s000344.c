#include<stdio.h>

int main(void){
    int K,A,B;
    int i=1,n=1;

    scanf("%d %d %d",&K,&A,&B);

    while(1){
        n=K*i;
        i++;
        if(n>=A && n<=B){
            printf("OK");
            break;
        }else if(n>B){
            printf("NG");
            break;
        }
    }

    return 0;
}