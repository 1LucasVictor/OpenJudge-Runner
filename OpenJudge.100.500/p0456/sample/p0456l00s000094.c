#include<stdio.h>
#include<string.h>

int main(void){
    char S[10000];
    char T[10000];
    int n=0;

    scanf("%s", S);
    scanf("%s", T);

    for(int i = 0;i<strlen(S);i++){
        if(S[i] != T[i]){
            n++;
        }
    }

    printf("%d", n);

    return 0;

}