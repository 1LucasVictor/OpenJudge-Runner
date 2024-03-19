#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[201], sub[201];
    int i, j, m, h, len;
    
    while (1) {
        scanf("%s", str);
        
        if ( strcmp(str, "-") == 0)
            break;
        
        scanf("%d", &m);
        for ( i=0; i<m; ++i) {
            scanf("%d", &h);
            
            len = strlen(str);
            for ( j=0; j<h; ++j)
                sub[j] = str[j];
            for ( j=h; j<len; ++j)
                str[j-h] = str[j];
            for ( j=len-h; j<len; ++j)
                str[j] = sub[j-len+h];
        }
        printf("%s\n", str);
    }
    
    return 0;
}
