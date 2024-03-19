#include <stdio.h>
#include <string.h>
int main(void){

    char S[200001],T[200001];
    int count,i,len;
    scanf("%s %s",S,T);

    len = strlen(S);
    for(i=0; i<=len; i++){
        if(S[i] != T[i]){
            count++;
        }  
    }
    
    printf("%d\n",count);

    return 0;
}