#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, n, m, len;
    char str[201], temp[201];

    for(;;) {
        scanf("%s", str);
        if (strcmp(str, "-") == 0) {
            break;
        }
        len = strlen(str);
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &m);
            strcpy(temp, str);
            strcpy(str, &temp[m]);
            strncpy(&str[len - m], temp, m);
            str[len] = '\0';
        }
        printf("%s\n", str);
    }
    return 0;
}