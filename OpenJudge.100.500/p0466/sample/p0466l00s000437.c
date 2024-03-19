#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char S[10];
    char T[11];
    int count = 0;
    scanf("%s", S);
    scanf("%s", T);

    for (int i = 0; i < strlen(T); i++){
        if (islower(T[i]) == 0){
            count++;
        }
    }

    if (count == 0 && strlen(S) + 1 == strlen(T) && strncmp(S, T, strlen(S)) == 0){
        printf("Yes\n");
    } else {
        printf("No\n");        
    }

    return 0;
}