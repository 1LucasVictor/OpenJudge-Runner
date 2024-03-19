#include<stdio.h>
#include<ctype.h>
#define SIZE 1200

int main(void)
{
    char c;
    
    while ( (c=getchar()) != '\n') {
        if ( isupper(c)) 
            printf("%c", tolower(c));
        else if ( islower(c)) 
            printf("%c", toupper(c));
        else 
            printf("%c", c);
    }
    putchar('\n');
    
    return 0;
}
