#include<stdio.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int i;

    if(A >= 10 || B >= 10){
        printf("-1");
    }else{
        printf("%d",A*B);
    }

    return 0;
}