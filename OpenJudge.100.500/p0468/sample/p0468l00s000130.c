#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 3

int main () {

    char S[LENGTH + 1];

    scanf("%s", S);
    //printf("%s\n", S);

    if(!strcmp(S, "ABC")) printf("ARC\n");
    if(!strcmp(S, "ARC")) printf("ABC\n");

    return 0;
}