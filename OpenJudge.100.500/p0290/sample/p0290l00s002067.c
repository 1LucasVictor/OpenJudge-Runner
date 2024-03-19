#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int);

int count = 0;

/*ここからがmain関数*/
int main()
{
  int n, flag = 0;
  int i;
  int data[10000];

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%d", &data[i]);

  for(i = 0; i < n; i++){
  flag = isprime(data[i]);
  if(flag == 1)
    count++;
  }

  printf("%d\n", count);
  
  return 0;
}

/*ここからがisprime関数*/
int isprime(x)
{
  int i;
  
  if(x == 2)
    return 1;

  if(x < 2 || x % 2 == 0)
    return 0;

  i = 3;
    while(i <= sqrt(x)){
      if(x % i == 0)
	return 0;
      i = i + 2;
    }
    
  return 1;
}

