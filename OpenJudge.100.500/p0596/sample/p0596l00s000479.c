#include<stdio.h>
#include<string.h>
int main(void){
    char S[100000];
    int i,j,N,cou0=0,cou1=0;
    scanf("%s",S);
    N=strlen(S);
    for(i=0;i<N;i++){
        if(S[i]=='0'){
            
            cou0++;
        
        }else if(S[i]=='1'){
            cou1++;
        }
    }
    if(cou0>cou1){
        printf("%d",N-(cou0-cou1));
    }else{
        printf("%d",N-(cou1-cou0));
    }
    return 0;
}