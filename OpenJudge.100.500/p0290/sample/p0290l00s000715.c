#include <stdio.h>

int sosuu(int);
int main(){
  int n,i,num=0;

  scanf("%d",&n);
  int a;
  for(i = 0;i<n;i++)
    {
      scanf("%d",&a);
      if(sosuu(a)==0)
	{
	  num++;
	}
    }
  printf("%d\n",num);
  return 0;
}

int sosuu(int x)
{
  int i,f=0;
  
  for(i=2;i<x;i++)
    {
      if(x%i==0)
	{
	  f=1;
	  break;
	}
    }
  return f;
}