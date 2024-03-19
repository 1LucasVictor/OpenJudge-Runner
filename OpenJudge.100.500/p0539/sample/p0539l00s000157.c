#include<stdio.h>
int main()
{
	int A, B;
	int a, b, c, i;
	scanf("%d", &a);
	for (i = 1; i <= 9; i++)
		for (b = 1; b <= 9; b++)
			if (a == i * b)
			{printf("Yes\n"); return 0;
              }
				printf("No");
  return 0;
}
