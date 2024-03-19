#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num[3];
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    if (num[0] == 5 && num[1] == 5 && num[2] == 7) {
        printf("YES\n");
        exit(1);
    }
    if (num[0] == 5 && num[1] == 7 && num[2] == 5) {
        printf("YES\n");
        exit(1);
    }
    if (num[0] == 7 && num[1] == 5 && num[2] == 5) {
        printf("YES\n");
        exit(1);
    }
    if (num[0] != 5 || num[1] != 5 && num[2] != 7) {
        printf("NO\n");
        exit(1);
    }
    if (num[0] != 5 || num[1] != 7 || num[2] != 5) {
        printf("NO\n");
        exit(1);   
    }
    if (num[0] != 7 || num[1] != 5 || num[2] != 5) {
        printf("NO\n");
        exit(1);
    }
    return 0;
}

