#include<stdio.h>
#include<string.h>
int main(void){
    char S[100000];
    int i,j,N,cou=0;
    scanf("%s",S);
    N=strlen(S);
    for(i=0;i<N;i++){
        if(S[i]=='0'){
            cou--;
        }else if(S[i]=='1'){
            cou++;
        }
    }
    printf("%d",N-cou);
    return 0;
}