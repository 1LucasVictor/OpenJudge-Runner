#include <stdio.h>
#define DATA_NUM (200)

int calc_digit(int);

int main(void)
{
  int a, b;

  while(scanf("%d %d\n",&a,&b)!=EOF)
  {
    printf("%d\n",calc_digit(a+b));
  }

  return 0;		
}
	
int calc_digit(int x)
{
  int i;

  for(i=1; ; i++)
  {
    x = x/10;
	if(x==0) break;
  }  	  
  return i;
}