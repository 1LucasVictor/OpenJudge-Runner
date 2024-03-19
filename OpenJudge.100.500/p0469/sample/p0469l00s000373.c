#include<stdio.h>

int main()
{
    int k;
    int a, b;
    scanf("%d",&k);
    scanf("%d%d",&a,&b);

    int sum=0;

    for(int i=a; i<=b; i++)
    {
        if(i%k==0)
        {
            sum++;
            printf("OK\n");
            break;
        }

    }
    if(sum==0)
        printf("NG\n");
        return 0;
}
