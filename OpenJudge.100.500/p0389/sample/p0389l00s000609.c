#include <stdio.h>
 
int main(void)
{
    while (1) {
        char str1[201];
        scanf("%s", str1);
 
        if (str1[0] == '-')
            break;
 
        int m;
        scanf("%d", &m);
 
        int i;
        for (i = 0; i < m; i++) {
            int h;
            scanf("%d", &h);
 
            char str2[h];
 
            int j;
            for (j = 0; j < h; j++)
                str2[j] = str1[j];
 
            for (j = 0; str1[h + j] != '\0'; j++)
                str1[j] = str1[h + j];
 
            int k = j;
 
            for (j = 0; j < h; j++)
                str1[k + j] = str2[j];
        }
 
        printf("%s\n", str1);
    }
 
    return 0;
}
