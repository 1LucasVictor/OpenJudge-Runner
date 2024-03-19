#include<stdio.h>
int main()
{
    int n, div, flag = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        div = n % 10;
        n = n / 10;
        if(div == 7)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
