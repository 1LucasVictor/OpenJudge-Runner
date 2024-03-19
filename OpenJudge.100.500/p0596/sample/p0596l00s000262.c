#include<stdio.h>
#include<string.h>

int main(void){
    char S[10000]={};
    int count =0;
    scanf("%s",S);
    
    for(int i=0;i<strlen(S);i++){
        if(S[i]=='1'){
            count ++;
        }
    }
    int N = strlen(S)-count;
    if(count>N){
        printf("%d",2*N);
    }else{
        printf("%d",2*count);
    }
    return 0;
}