#include<stdio.h>
#include<string.h>
int main(void){
    char S[20],T[20];
    scanf("%s %s",S,T);
    for(int i=0;i<strlen(S);i++){
        if(S[i]!=T[i]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
