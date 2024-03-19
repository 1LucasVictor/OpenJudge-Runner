#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d%d",&n,&i);
    if(n>8||i>8)
        printf(":(");
    else
        printf("Yay!");

    return 0;
}
