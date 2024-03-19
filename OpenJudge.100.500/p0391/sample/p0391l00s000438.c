#include <stdio.h>
#include <string.h>
#define swap(type, x, y) {type tmp = x; x = y; y = tmp;}

int main(void) {
    char print[] = "print";
    char reverse[] = "reverse";
    char replace[] = "replace";
    char str[1001] = {'\0'};
    scanf("%s", str);
    int q, a, b, k;
    char p[1001] = {'\0'};
    char command[8]  = {'\0'};
    scanf("%d", &q);
    getchar();
    int BUF = 1100;
    char buff[BUF];

    while (fgets(buff, BUF, stdin) != NULL) {
        sscanf(buff, "%s %d %d %s", command, &a, &b, p);
        if (strcmp(command, print) == 0) {
            for (int j = a; j <= b; j++) {
                printf("%c", str[j]);
            }
            printf("\n");
        } else if (strcmp(command, reverse) == 0) {
            k = 0;
            int c = (a + b + 1) / 2;
            for (int j = b; j >= c; j--) {
                swap(char, str[j], str[a + k]);
                k++;
            }
        } else {
            for (int j = a; j <= b; j++) {
                str[j] = p[j - a];
            }
        }
    }
    return 0;
}
