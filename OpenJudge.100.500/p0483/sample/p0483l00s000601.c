#include<stdio.h>
int main()
{
    int n, i, temp=1;
    scanf("%d", &n);
    while(n>0)
    {
        if(n%10 == 7)
            {
                i=1;
            }
        n = n/10;
    }
    if(temp == i)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}