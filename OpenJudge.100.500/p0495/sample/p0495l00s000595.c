#include <stdio.h>

int main(void)
{
    char num[3];
    scanf("%s", &num);

    if(( num[0] == num[1] ) && ( num[1] == num[2] ))
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    
    return 0;
}