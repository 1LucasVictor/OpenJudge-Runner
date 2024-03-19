#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,cou;
    char S[100000];
    scanf("%d %d",&A,&B);
    if((A<=8)&&(B<=8)){
        printf("Yay!");
    }else{
        printf(":(");
    }
    return 0;
}