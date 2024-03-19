#include<stdio.h>

int min(int a,int b)
{

   if(a>b)return b;
   else return a;
}
int max(int a, int b)
{
    if(a>b)return a;
    else return b;
}

int main()
{
    int a,b,c,d,e,f;
    int ans=0;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(b<c)
    {
        ans=0;
    }
    else if(b>=c)
    {
       e=min(b,d);
       f=max(a,c);
       ans=e-f;
    }
    printf("%d\n",ans);

    return 0;
}
