#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int);

int main(){

  int i,x,n,count = 0;
  int *m;

  scanf("%d",&n);
  m = malloc(sizeof(int) * n);
  for(i = 0 ; i < n ; i++)
    {
      scanf("%d",&m[i]);
      if( isprime(m[i]) == 1)
	{
	  count++;
	}
    }
  printf("%d\n",count);
  free(m);
  return 0;
}

int isprime(x){

  int i;

  if(x <= 1)
    {
      return 0;
    }
  for( i = 2 ; i <= x-1; i++)
    {
      if( x % i == 0)
	{
	  return 0;
	}
      
    }
  return 1;
}