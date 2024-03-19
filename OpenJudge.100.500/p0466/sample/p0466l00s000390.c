#include <stdio.h>
#include <string.h>

int main(void){

    char S[10];
    char T[11];
    scanf("%s", S);
    scanf("%s", T);

    if (strncmp(S, T, strlen(S)) == 0){
        printf("Yes\n");
    } else {
        printf("No\n");        
    }

    return 0;
}