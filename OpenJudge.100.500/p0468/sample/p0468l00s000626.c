#include <stdio.h>
#include <string.h>

int main(void){

    char S[3];
    scanf("%s", S);

    if (strcmp(S, "ABC") == 0){
        printf("ARC\n");
    } else {
        printf("ABC\n");        
    }

    return 0;
}