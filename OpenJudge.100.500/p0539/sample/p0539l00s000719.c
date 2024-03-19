#include<stdio.h>
int main(void)
{
    int n,i,j;
    scanf("%d",&n);
    for(i = 1 ; i <= 9 ; i++)
    {
        for(j = i ; j <= 9 ; j++)
        {
            if(i * j == n)
            {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}