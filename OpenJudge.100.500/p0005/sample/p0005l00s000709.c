#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[21];
    char t;
    int l;
    int i;
    
    scanf("%s", str);
    l = strlen(str);
    
    for (i = 0; i < l / 2; i++) {
        t = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = t;
    }
    
    printf("%s\n", str);
    
    return 0;
}