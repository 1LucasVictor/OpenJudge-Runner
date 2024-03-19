#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20], ans[20];
    int len, i;
    
    scanf("%s", str);
    len = strlen(str);
    
    for(i=0; i<len; i++) {
        printf("%c", str[len-i-1]); //-1は最後のEOFの分
    }
    puts("");
    
    return 0;
}
