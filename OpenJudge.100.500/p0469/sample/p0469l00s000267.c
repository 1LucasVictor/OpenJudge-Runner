#include<stdio.h>
int main()
{
  int a,b,k,m,i,c,j ;
   scanf("%d",&k);
   scanf("%d",&a);
   scanf("%d",&b);
  for(i=a+1;i<b;i++)
  {
    m=i/k;
    j=m*k;
    if(i==j)
      c++;
  }
  if(c!=0)
     printf("OK");
  else
    printf("NG");
}
    