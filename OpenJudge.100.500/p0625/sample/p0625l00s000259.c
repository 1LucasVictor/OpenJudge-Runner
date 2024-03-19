#include<stdio.h>

int main(){
    int A,B;
    scanf("%d%d",&A,&B);
    if(A<B){
        if(16-A-B>B*2-A*2){
            printf("Yay!");
        }else{
            printf(":(");
        }
    }
    if(A>B){
        if(16-A-B>A*2-B*2){
            printf("Yay!");
        }else{
            printf(":(");
        }
    }
    return 0;
}