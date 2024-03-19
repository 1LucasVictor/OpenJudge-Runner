#include<stdio.h>
#include<string.h>
int main()
{
    int i, d, N, count=0;
    scanf("%d", &N);
    for(i=1; i<=3; i++)
    {
        d= N%10;
        N= N/10;
        if(d==7)
        {
            count+=1;
        }
    }
    if(d>0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
