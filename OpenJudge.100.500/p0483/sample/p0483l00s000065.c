#include<stdio.h>
int main()
{
	int n,a=7,i,f=0;
  scanf("%d",&n);
  while(n)
  {
    i=n%10;
    if(i==a)
    {
      f=0;
    break;
    }
    n/=10;
  }
 if(f==0)
 {
	printf("Yes");
 }
  else
    printf("No");
  return 0;
}