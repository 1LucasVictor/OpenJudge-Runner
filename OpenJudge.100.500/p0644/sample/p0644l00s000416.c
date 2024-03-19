#include <stdio.h>

int main(void)
{
    char s[256];
    scanf("%s", s);
    
    int counter = 0;
    if(s[0] == '1') counter++;
    if(s[1] == '1') counter++;
    if(s[2] == '1') counter++;
    
    printf("%d", counter);

    return 0;
}