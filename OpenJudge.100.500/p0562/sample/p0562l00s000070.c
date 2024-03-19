#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, d;
	int count = 1;

	scanf("%d %d", &a, &b);

    if(b == 1)
    {
      printf("0");
      return 0;
    }
    
	d = a;

	while (d < b)
	{
		d = d - 1 + a;
		count++;
	}

	printf("%d\n", count);

	return 0;
}
