#include<stdio.h>
int main()
{
    int n,a,ev_no=0,count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            ev_no++;
            if(a%3==0 || a%5==0)
            {
                count++;
            }
        }
    }
    if(count == ev_no)
    {
        printf("APPROVED\n");
    }
    else
    {
        printf("DENIED\n");
    }
    return 0;
}
