#include<stdio.h>
int main()
{
    int d,n,c;
    scanf("%d %d",&d,&n);
    if(d==0)
    {
        c=n;
    }
    else if(d==1)
    {
        c=n*100;
    }
    else if(d==2)
    {
        c=n*100*100;
    }
    printf("%d\n",c);
    return 0;
}
