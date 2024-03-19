#include <stdio.h>
#include <string.h>

int main(void)
{
    int m;
    int h;
    int len;
    char tmp;
    
    while ( 1 ) {
        char str[201] = {0};
        scanf("%s", str);
        if ( strcmp(str, "-") == 0 ) {
            break;
        }
        len = strlen(str);
        scanf("%d", &m);
        for ( int i = 0; i < m; i++ ) {
            scanf("%d", &h);
            for ( int j = 0; j < h; j++ ) {
                tmp = str[0];
                for ( int k = 1; k < len; k++ ) {
                    str[k - 1] = str[k];
                }
                str[len - 1] = tmp;
            }
        }
        printf("%s\n", str);
    }
    
    return 0;
}
