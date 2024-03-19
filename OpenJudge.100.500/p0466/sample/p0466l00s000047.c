#include<stdio.h>

int main(void){
    char S[11];
    char T[11];
    int i,a,b;
    scanf("%s",S);
    scanf("%s",T);
    a=0;
    b=0;
    for(i=0;S[i]!='\0';i++){
        if(S[i]!=T[i]){
            a=1;
        }
        if(S[i+1]!=T[i+1]){
            b=1;
        }
        if(S[i+1]==T[i+1]){
            b=0;
        }
    }
    if(a==0&&b==1){
        printf("Yes");
    }else{
        printf("No");
    }

}