#include <stdio.h>
#include <string.h>
int main(){
    char str[1001], temp[1001], p[1001], cmd[10];
    int q, a, b;
    scanf("%s", str);
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%s", cmd);
        scanf("%d %d", &a, &b);
        if (strcmp(cmd, "print") == 0)
        {
            for (int j = a; j <= b; j++)
            {
                printf("%c", str[j]);
            }
            printf("\n");
        }else if (strcmp(cmd, "replace") == 0)
        {
            scanf("%s", p);
            for (int j = 0; j < strlen(p); j++)
            {
                str[a + j] = p[j];
            }
        }else if (strcmp(cmd, "reverse") == 0)
        {
            strcpy(temp, str);
            for (int j = 0; j < b - a + 1; j++)
            {
                str[a + j] = temp[b - j];
            }
        }
    }
    return 0;
}
