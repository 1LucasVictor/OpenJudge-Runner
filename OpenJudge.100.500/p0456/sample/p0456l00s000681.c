#include <stdio.h>
#include <string.h>

int main()
{
    char s[2*10*10*10*10*10] ;
    char t[2*10*10*10*10*10] ;

    scanf("%s",s) ;
    scanf("%s",t) ;

    int i = 0 ;
    int n = 0 ;

    for (i=0; i<strlen(s); i++) {
        if (s[i] != t[i]) {
            n++ ;
        }
    }

    printf("%d\n", n) ;
}