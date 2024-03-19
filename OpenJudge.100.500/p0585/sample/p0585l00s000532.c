#include<stdio.h>
int main()
{
int x,b,t,ans=0,a,i;
scanf("%d%d%d",&x,&b,&t);
for(i=1;i<=20;i++)
{
    a=i*x;
    if(a>=t+1){break;}
    ans=ans+b;

}
printf("%d",ans);
}
