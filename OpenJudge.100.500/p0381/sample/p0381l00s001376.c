#include <stdio.h>

int main(void)
{
  int n = 0;
  int x = 0;
  int i, j, k;
  int result = 0;

  while(1){
    scanf("%d %d", &n, &x);
    
    if(n == 0 && x == 0)
      break;

    for(i = 1; i < n - 2; i++)
      for(j =1; j < n -1; j++)
	for(k = 1; i + j + k <= n; k++)
	  if(i + i + j + i + j + k == x)
	    result++;

    printf("%d\n", result);

    result = 0;
  }
  return 0;
}