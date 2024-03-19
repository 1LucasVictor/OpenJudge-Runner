#include<stdio.h>
int main(void)
{
    int n,i,an,min,max,sum;
    scanf("%d",&n);
    scanf("%d",&an);
    min=an;
    max=an;
    sum=an;
    for(i=2;i<=n;i++)
    {
        scanf("%d",&an);
        sum+=an;
        if(max<an)
            max=an;
        else if(min>an)
            min=an;
    }
    printf("%d %d %d\n",min,max,sum);
    
    return 0;
}
