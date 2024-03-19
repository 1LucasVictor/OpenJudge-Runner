#include<stdio.h>
int main(void){
    char S[200000],T[200000];
    int a=0,i;
    scanf("%s",S);
    scanf("%s",T);
    for(i=0;S[i]!='\0';i++){
        if(S[i]!=T[i]){
            a++;
        }
    }
    printf("%d",a);
    return 0;
}