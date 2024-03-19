#include<stdio.h>
int main()
{
  int a,b,c=1,d=0;
  while (scanf("%d%d",&a,&b) != EOF)
    {
      while(c<=a+b)
	{
	  c*=10;
	  d++;
	}
      printf("%d\n",d);
    }
  return 0;
}