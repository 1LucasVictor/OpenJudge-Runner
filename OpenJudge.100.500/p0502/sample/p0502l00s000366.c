#include<stdio.h>
int main(void)
{
    int n,a,i,j,count = 0;
    scanf("%d",&n);
    for(i = 1 ;i <= n ; i++)
    {
        scanf("%d",&a);
        if(a % 2 == 0)
        {
            if(a % 3 != 0 && a % 5 != 0)
            {
                printf("DENIED");
                return 0 ;
            }
        }
    }
    printf("APPROVED");
    return 0;

}