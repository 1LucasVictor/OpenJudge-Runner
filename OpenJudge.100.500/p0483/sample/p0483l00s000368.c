#include <stdio.h>

int main() {
    char a[3];
    scanf("%s", a);
    for (int i=0; i<3; i++) {
        if (a[i] == '7') {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}