#include<stdio.h>
int main()
{
int a,b,c,r,i;
scanf("%d",&r);
if(r<=1000)
{
for(i=1;i<=r;i++)
{
scanf("\n%d %d %d",&a,&b,&c);
if(a>=1&&a<=1000&&b>=1&&b<=1000&&c>=1&&c<=1000)
  {
    if(((a*a)==(b*b)+(c*c))||((b*b)==(c*c)+(a*a))||((c*c)==(b*b)+(a*a)))
        printf("YES\n");
    else
        printf("NO\n");

  }
}
}
    return 0;
}