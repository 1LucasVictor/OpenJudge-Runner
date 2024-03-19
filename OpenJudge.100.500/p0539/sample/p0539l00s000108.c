#include<stdio.h>
#include<stdlib.h>
 
int main()
{
int a,i,j,k;
 scanf("%d",&a);
  if(a>0 && a<=100)
  {
  for(i=1;i<=9;i++);
  {
  for(j=1;j<=9;j++)
  {
  k=i*j;
    if(k==a)
    {
    printf("Yes");
      exit(0);
    }
    else
  {
     printf("No");
    exit(0);
  }
  }
  }
  }
}