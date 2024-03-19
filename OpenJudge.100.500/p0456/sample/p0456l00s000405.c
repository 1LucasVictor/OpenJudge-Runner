#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char S[2*10*10*10*10*10], dmy;
    if(scanf("%s", S) == EOF) exit(1);
    if(scanf("%c", &dmy) == EOF) exit(1);

    int i, count;
    char T;
    for (i = 0; i < strlen(S); i++){
        T = getchar();
        if(S[i] != T){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}