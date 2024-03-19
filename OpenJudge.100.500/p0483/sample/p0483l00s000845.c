#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    char s[10];
    sprintf(s, "%d", n);

    int flag = 0; 
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '7') {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}