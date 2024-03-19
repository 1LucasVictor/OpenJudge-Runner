#include <stdlib.h>
#include <stdio.h>


int main(void) {
    char input[5];
    scanf("%s", input);

    for (int i=0;i<3;i++) {
        if (input[i] == input[i+1]) {
            printf("Bad\n");
            return 0;
        }
    }

    printf("Good\n");
    return 0;
}