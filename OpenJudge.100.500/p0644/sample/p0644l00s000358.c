#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[3];
    int i;
    int S[3];
    int count=0, answer;

    scanf("%c%c%c", &str[0], &str[1], &str[2]);

    for(i=0; i<3; i++) {
        S[i] = atoi(&str[i]);
    }

    for(i=0; i<3; i++) {
        if(S[i]==1) {
            count++;
        }
    }

    printf("%d \n", count);

    return 0;
}
