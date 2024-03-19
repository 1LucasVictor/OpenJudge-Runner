#include <stdio.h>
#define N 100

void swap(int *,int *);

void swap(int *a,int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a,number[N],i,j,cnt=0,tmp;

  scanf("%d",&a);

  for(i = 0;i < a;i++)
    {
      scanf("%d",&number[i]);
    }
      
  for(i = 0;i < a;i++)
    {
      for(j = a-1;j > i;j--)
	{
	  if(number[j-1] > number[j])
	    {
	      swap(&(number[j-1]),&(number[j]));
	      cnt++;
	    }
	}
      printf("%d ",number[i]);
    }

  printf("\n");
  printf("%d\n",cnt);
  
  return 0;
  
}