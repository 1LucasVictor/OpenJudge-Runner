#include <stdio.h>
#include <string.h>

int main(void) {
    char str[20];
    int i, len;
    
    scanf("%s", str);
    
    len = (int)strlen(str);
    
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    putchar('\n');
    
    return(0);
}