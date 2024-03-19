#include<stdio.h>
int main()
{
    int a,b,c,d,p,q,r,sum;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b<c||d<a)
    {
        sum=0;
    }
    else
    {
        p=b-a;
        q=d-c;
        r=b-c;
        if(q>=r)
        {
            sum=r;
        }
        else
        {
            sum=q;
        }
    }
    printf("%d\n",sum);

   return 0;


}
