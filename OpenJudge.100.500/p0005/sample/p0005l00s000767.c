#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[])
{
    char str[21], tmp;
    int i, len;
    for (i = 0; i < 21; i++) {
        scanf("%c", &str[i]);
        if (str[i] == '\n') {
            break;
        }
    }
    len = strlen(str);
    
    for (i = 0; i < len / 2; i++) {
        tmp = str[i];
        str[i] = str [len - 2 - i];
        str [len - 2 - i] = tmp;
    }
    
    for (i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    
    
    return 0;
}