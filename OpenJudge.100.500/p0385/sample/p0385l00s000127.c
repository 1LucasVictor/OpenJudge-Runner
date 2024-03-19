#include <stdio.h>
#include <string.h>

int main(void)
{
    char str_num[1001];
    int res;

    while ( 1 ) {
        
        memset(str_num, '\0', sizeof(str_num));
        res = 0;
        
        scanf("%s", &str_num[0]);
        
        if ( str_num[0] == '0' ) {
            break;
        }
        
        for ( int i = 0; i < strlen(str_num); i++ ) {
            res += str_num[i] - '0';
        }
        printf("%d\n", res);
    }
    
    return 0;
}
