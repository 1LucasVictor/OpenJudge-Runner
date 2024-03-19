#include<stdio.h>
#include<stdio.h>

int main(void)
{
  int a,b,k,n;
  scanf("%d",&k);
  scanf("%d%d",&a,&b);
  n=k;
  while(n<=b)
    {
      if(n>=a && n<=b)
	{
	  printf("OK\n");
	  return 0;
	}
      n += k;
    }
  printf("NG\n");

  return 0;
}
