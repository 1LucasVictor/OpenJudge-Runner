#include<stdio.h>
int main()
{
    int a,b,c,d,e,k;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&k);
    int h,j,q,w,r,t,y,u,i,o,p;
   if(a<b<c<d<e)
   {
       h=b-a; j=c-a; q=d-a; w=e-a;

    r=c-b;t=d-b;y=e-b;
    u=d-c;
    i=e-c;
    o=e-d;
    if(h<=k&&j<=k&&q<=k&&w<=k&&r<=k&&t<=k&&y<=k&&u<=k&&i<=k&&o<=k)
    {
        printf("Yay!");
    }
    else
    {
        printf(":(");
    }
   }


}
