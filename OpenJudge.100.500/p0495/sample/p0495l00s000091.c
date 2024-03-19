#include <stdio.h>
#include <string.h>

int main() {
    char str[3] = {};
    scanf("%s", str);
    if (strcmp(str, "AAA") == 0 || strcmp(str, "BBB") == 0) {
        printf("No\n");
    }
    else {
        printf("Yes\n");
    }
    return 0;
}