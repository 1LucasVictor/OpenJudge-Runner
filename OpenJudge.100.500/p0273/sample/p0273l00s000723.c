#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*ここからがmain関数*/
int main()
{
  int i, n;

  scanf("%d", &n);
  printf("%d\n", fibonacci(n));

  return 0;
}

/*fibonacci関数*/
int fibonacci(int n)
{
  int i;
  int data[45];

  data[0] = 1;
  data[1] = 1;

  for(i = 2; i <= n; i++)
    data[i] = data[i - 2] + data[i - 1];
  
  return data[n];
}









