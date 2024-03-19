#include <stdio.h>

int main( void )
{
    int cat, unsure, que;

    scanf("%d %d %d", &cat, &unsure, &que );
    
    printf("%s\n", (cat <= que && cat + unsure >= que)? "YES":"NO");
    return 0;
}