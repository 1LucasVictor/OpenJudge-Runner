#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int math(int a,int b);
int main(void){
    int A=0;
    int B=0;
    int ans=0;
    scanf("%d %d",&A,&B);
    ans=math(A,B);
    printf("%d",ans);
    return 0;
}

int math(int a,int b){
    int ANS=0;
    if(b%a==0){
        ANS=a+b;
    }else{
        ANS=b-a;
    }
    return ANS;
}