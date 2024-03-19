#include<stdio.h>

int main()
{
    char a[3];

    scanf("%[^\n]",a);

    if (a[0]==a[1] && a[0]==a[2])
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
