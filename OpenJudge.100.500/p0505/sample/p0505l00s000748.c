#include<stdio.h>
int main()
{
 int i,a,b,s[10000],sum;
 scanf("%d %d",&a,&b);
  for(i=0;i<b;i++)
  scanf("%d",&s[i]);
  sum=a;
  for(i=0;i<b;i++)
  sum=sum-s[i];
 if(sum<=0) printf("Yes");  
  else printf("No");
return 0;	
}
