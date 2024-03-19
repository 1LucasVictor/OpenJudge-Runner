#include<stdio.h>
#include<string.h>
int main(void){
    char S[1000000],T[1000000];
    int count=0,i;
    scanf("%s",S);
    scanf("%s",T);
    int l=strlen(S);
    for(i=0;i<l;i++){
        if(S[i]!=T[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}