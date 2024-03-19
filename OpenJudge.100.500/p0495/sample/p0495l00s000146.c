#include <stdio.h>

int main(void)
{
    char c[3];
    scanf("%s",c);
    
    if ((c[0] == c[1] && c[1] == c[2] && c[2] == 'A') || (c[0] == c[1] && c[1] == c[2] && c[2] == 'B')){
        printf("No\n");
    }
    else {
        printf("Yes\n");
    }
    return 0;
}


