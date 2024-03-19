#include<stdio.h>
int main()
{
    int n, div;
    scanf("%d", &n);
    div = n % 10;
    if(div == 7)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
