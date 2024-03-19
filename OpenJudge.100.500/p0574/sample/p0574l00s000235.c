#include <stdio.h>

int main(void) {
    char s[5];
    int i = 0;
    int f = 0;

    scanf("%s", s);

    while(i < 5) {
        if (s[i] == s[i+1]) {
            printf("Bad\n");
            f++;
            break;
        }
        i++;
    }

    if (i == 5 && f)
        printf("Good\n");

    return 0;
}