#include<stdio.h>
#include<limits.h>

int main(){
  int n,i;
  int a;
  long min=LONG_MAX;
  long max=LONG_MIN;
  int sum=0;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      scanf("%d",&a);
      
      if(max < a)
	{
	  max = a;
	}
      if(min > a)
	{
	  min = a;
	}
      sum += a;
    }
  printf("%ld %ld %d\n",min,max,sum);

  return 0;
}
