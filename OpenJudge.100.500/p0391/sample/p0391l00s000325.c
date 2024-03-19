#include<stdio.h>
#include<string.h>
#define SIZE 1001

int main(void)
{
    char tmp, str[SIZE], cmd[8], p[SIZE];
    int i, j, q, a, b;
    
    scanf("%s", str);
    scanf("%d", &q);
    
    for ( i=0; i<q; ++i) {
        scanf("%s %d %d", cmd, &a, &b);
        
        if ( strcmp(cmd, "replace") == 0) {
            scanf("%s", p);
            for ( j=a; j<=b; ++j)
                str[j] = p[j-a];
        }else if ( strcmp(cmd, "reverse") == 0) {
            for ( j=0; j<(b-a+1)/2; ++j) {
                tmp = str[a+j];
                str[a+j] = str[b-j];
                str[b-j] = tmp;
            }
        }else if ( strcmp(cmd, "print") == 0) {
            for ( j=a; j<=b; ++j)
                printf("%c", str[j]);
            putchar('\n');
        }
    }
    
    return 0;
}
