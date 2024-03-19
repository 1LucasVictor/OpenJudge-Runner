#include<stdio.h>
int main(void)
{
    int a[100];
    int n, i,flag=1;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0;i < n;i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] % 3 != 0 && a[i] % 5 != 0)
            {
                flag = 0;break;
            }
        }
    }
    if (flag == 0)
    {
        printf("DENIED");
    }
    else
    {
        printf("APPROVED");
    }
    return 0;
}
