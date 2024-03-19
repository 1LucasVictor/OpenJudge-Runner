#include<stdio.h>

int main(void) {
    char str[20];
    fgets(str, 20, stdin);                                                                                         

    int i, len;
    for(i = 0; i < 20; i++) {
        if(str[i] == '\0') {
            len = i;
            break;
        }
    }

    for(i = 0; i < len; i++) {
        printf("%c", str[len - 1 - i]);
    }
    printf("\n");

    return 0;
}