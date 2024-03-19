#include<stdio.h>
int main(){
    int K;
    int A,B;
    scanf("%d",&K);
    scanf("%d %d",&A,&B);
    for(int i=K;i<=1000;i++){
        if((A<=i*i)&&(i*i<=B)||(A<=i)&&(i<=B)){
            printf("OK\n");
            return 0;
        }
    }
    printf("NG\n");
}