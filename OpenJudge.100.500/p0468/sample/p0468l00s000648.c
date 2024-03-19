#include <stdio.h>

int main(void)
{
    char str[3],str1[3]="ABC";
    scanf("%s", str);
    if (str[1] == str1[1])
    {
        printf("ARC");
    }
    else
    {
        printf("ABC");
    }

    return 0;
}
