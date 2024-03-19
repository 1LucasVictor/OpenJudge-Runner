#include<stdio.h>
#include<math.h>
int main()
{
  int i,c=0,n,d,p,q,j;

  scanf("%d%d",&n,&d);
  for(i=0;i<n;i++)
  {
     scanf("%d%d",&p,&q);
     j=sqrt((p*p)+(q*q));
     if(j==d)
     {
         c++;
     }
  }
printf("%d\n",c);
return 0;
}
