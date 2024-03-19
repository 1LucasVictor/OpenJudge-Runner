#include<stdio.h>

int main(void)
{
  int temp, i=0;
  int t[101];
  
  while(scanf("%d",&temp)!=EOF)
    {
      if(temp!=0)
	{
	  t[i] = temp;
	  i++;
	}
      else
	{
	  printf("%d\n",t[i-1]);
	  i--;
	}
    }
  return 0;
}