/*
 * ID: ITP1_9_D
 * Problem: transformation
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char line[1000 + 1];
    scanf("%s", line);

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char command[8], rline[1000 + 1];
        int a, b;
        scanf("%s %d %d", command, &a, &b);
        if (strcmp(command, "print") == 0) {
            for (int i = a; i <= b; i++)
                printf("%c", line[i]);
            printf("\n");
        } else if (strcmp(command, "reverse") == 0) {
            char temp[1000 + 1];
            for (int i = a; i <= b; i++)
                temp[i] = line[i];
            int j = b;
            for (int i = a; i <= b; i++)
                line[i] = temp[j--];
        } else if (strcmp(command, "replace") == 0) {
            scanf("%s", rline);
            int j = 0;
            for (int i = a; i <= b; i++)
                line[i] = rline[j++];
        }
    }
    return 0;
}

