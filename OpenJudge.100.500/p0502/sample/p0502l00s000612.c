#include<stdio.h>
int main()
{
    int n;
    int all[105];
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&all[i]);
        if(all[i]%2==0)
        {
            if(all[i]%3==0||all[i]%5==0)
                continue;
            else
            {
                printf("DENIED\n");
                return 0;
            }
        }
    }

    printf("APPROVED\n");
    return 0;
}



