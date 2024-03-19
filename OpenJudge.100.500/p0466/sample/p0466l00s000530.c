#include<stdio.h>
#include<string.h>

int main(){
    int len;
    char S[20],T[20];
    scanf("%s%s",S,T);
    len=strlen(S);
    for(int i=0;i<len;++i){
        if(S[i]!=T[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

    return 0;
}