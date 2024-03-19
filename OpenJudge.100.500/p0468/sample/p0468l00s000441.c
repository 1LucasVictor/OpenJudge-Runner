#include<stdio.h>
int main(){
    char S[3+1];
    scanf("%s",S);
    if((S[0]=='A')&&(S[1]=='B')&&(S[2]=='C')){
        printf("ARC\n");
    }else if((S[0]=='A')&&(S[1]=='R')&&(S[2]=='C')){
        printf("ABC\n");
    }
}