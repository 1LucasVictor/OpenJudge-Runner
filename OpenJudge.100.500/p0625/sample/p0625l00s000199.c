#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>8||b>8||a+b>16)
        printf(":(\n");
    else
        printf("Yay!\n");
    return 0;
}
