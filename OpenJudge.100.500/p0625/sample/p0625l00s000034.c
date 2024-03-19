#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>8 || b>8)
    {
        printf(":(\n");
    }
    else printf("Yay!\n");
    return 0;
}
