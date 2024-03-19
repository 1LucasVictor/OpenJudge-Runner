#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, n, h, len;
    char str[201], temp[201];

    for(;;) {
        scanf("%s", str);
        if (strcmp(str, "-") == 0) {
            break;
        }
        len = strlen(str);
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &h);
            strcpy(temp, str);
            strcpy(str, &temp[h]);
            strncpy(&str[len - h], temp, h);
            str[len] = '\0';
        }
        printf("%s\n", str);
    }
    return 0;
}