#include <stdio.h>
#include <string.h>

int main(void){
    char S[3+1];

    fgets(S, sizeof(S), stdin);
    if(strcmp(S, "ABC") == 0)
        printf("ARC\n");
    else
        printf("ABC\n");

    return 0;
}
