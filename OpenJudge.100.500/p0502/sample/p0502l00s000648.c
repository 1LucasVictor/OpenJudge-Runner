#include<stdio.h>
int main()
{
    int n,b=0;
    scanf("%d",&n);
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            if(a%3==0||a%5==0)
            {
                printf("APPROVED");
                break;
            }
            else
            {
                printf("DENIED");
                break;
            }
        }
        else
            printf("DENIED");
            break;
    }
    return 0;

}
