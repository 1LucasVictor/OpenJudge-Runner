#include<stdio.h>
int main()
{
 int i,a,b,m=0,n,s[100],sum;
 scanf("%d %d",&a,&b);
 if(a>=1&&a<=1000000000&&b>=1&&b<=100000)
  for(i=0;i<b;i++)
  {scanf("%d",&s[i]);
  if(s[i]>=1&&s[i]<=10000);}
  sum=a;
  for(i=0;i<b;i++)
  sum-=s[i];
 if(i>=b&&sum<=0) printf("Yes");  
  else printf("No");
  
  
  
return 0;	

}