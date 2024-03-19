#include <stdio.h>

int main(void)
{
  	int	A;
  	int B;
  	int num;
  
  	num = scanf("%d %d", &A, &B);
  	if (num != 2)
      	return (0);
  
  	if (A > 9)
    {
      	printf("-1");
  		return (0);
    }
  	if (B > 9)
    {
      	printf("-1");
      	return (0);
    }
  	printf("%d", A*B);
  	return (0);
}