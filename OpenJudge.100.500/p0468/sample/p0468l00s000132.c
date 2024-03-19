#include <stdio.h>

int main() {
    char aaa[4];
    scanf("%s", aaa);
    
    if (aaa[1] == 'R')
        printf("ABC\n");
    else
        printf("ARC\n");

    return 0;
}