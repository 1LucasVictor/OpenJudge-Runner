#include <stdio.h>
int main(void)
{
    char str1[3];
    scanf("%s",str1);
    if(!strcmp(str1, "ABC"))
    {
        printf("ARC\n");
    }
    if(!strcmp(str1, "ARC"))
    {
        printf("ABC\n");
    }
    return 0;
}