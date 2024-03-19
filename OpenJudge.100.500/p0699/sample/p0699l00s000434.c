#include<stdio.h>
int main()
{
int p,q,r;
scanf("%d%d%d",&p,&q,&r);
if(p==5)
{
    if(q==5)
    {
        if(r==7)
        {
            printf("YES");
        }
        else if(r==5)
        {
            printf("NO");
        }
    }
    else if(q==7)
    {
        if(r==5)
        {
            printf("YES");
        }
        else if(r==7)
        {
            printf("NO");
        }
    }
}
else if(p==7)
{
     if(q==5)
    {
        if(r==5)
        {
            printf("YES");
        }
        else if(r==7)
        {
            printf("NO");
        }
    }
    else if(q==7)
    {
        printf("NO");
    }
}
return 0;
}