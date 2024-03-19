#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,cou;
    char S[100000];
    scanf("%d %d",&A,&B);
    if((A+B>=A-B)&&(A+B>=A*B)){
        printf("%d",A+B);
    }else if((A-B>=A+B)&&(A-B>=A*B)){
        printf("%d",A-B);
    }else if((A*B>=A-B)&&(A*B>=A+B)){
        printf("%d",A*B);
    }
    return 0;
}