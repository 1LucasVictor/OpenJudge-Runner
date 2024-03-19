#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[11]={};
    char T[12]={};
    scanf("%s",S);
    scanf("%s",T);
    T[strlen(S)]='\0';

    if(strcmp(S,T)==0){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
