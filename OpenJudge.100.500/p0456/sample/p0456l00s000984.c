#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){


    char S[200000];
    char T[200000];

    scanf("%s",S);
    scanf("%s",T);

    int i;
    int n=0;

    for (i=0;i<strlen(S);i++){
        if(S[i]!=T[i]){
            T[i]=S[i];
            n++;

        }
    }
    printf("%d\n",n);

}