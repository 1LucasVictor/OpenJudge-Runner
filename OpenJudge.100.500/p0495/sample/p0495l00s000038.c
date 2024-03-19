#include <stdio.h>
#include <string.h>

int main()
{
    char s[3];
    for ( int i=0; i<3; i++){
        scanf("%c", &s[i]);
    }
    
    if ( s[0] != s[1] || s[1] != s[2] || s[2] != s[0] ){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
