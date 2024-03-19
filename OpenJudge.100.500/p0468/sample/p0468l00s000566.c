#include <stdio.h> 
#include <math.h>
#include<string.h> 

int main(void)
{
    // int x;
    // scanf("%d", &x);
    // printf("%d\n", x);

    // long x;
    // scanf("%ld", &x);
    // printf("%ld\n", x);

    // char array[x];

    char str[3];
    scanf("%s", str);

    if (strcmp(str,"ABC")==0)
        puts("ARC");
    
    if (strcmp(str,"ARC")==0)
        puts("ABC");
    
    return 0;
}