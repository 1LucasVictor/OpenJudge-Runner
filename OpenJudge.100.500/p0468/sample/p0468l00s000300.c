#include <stdio.h>

int main(void)
{
    char str[3],str1[]="ABC";
    scanf("%s", str);

    if (str[2] != str1[2])
    {
        printf("ABC");
    }
    else
    {
        printf("ARC");
    }

    return 0;
}
