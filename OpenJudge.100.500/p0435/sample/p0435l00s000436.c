#include<stdio.h>
int main(void)
{
    int n,d,x,y,i,count = 0,p;
    scanf("%d %d",&n,&d);
    for(i = 1 ; i <= n ; i++)
    {
        scanf("%d %d",&x,&y);
        p = x*x + y*y;
        if(p <= d*d)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;


}