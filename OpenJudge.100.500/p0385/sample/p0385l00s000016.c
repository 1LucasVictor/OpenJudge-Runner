#include <stdio.h>

int main(void)
{
	int x, sum;

	while (1)
	{
		x = getchar();
		if(x == '0')
			break;
		else {
			sum = x - '0';
			while (1) {
				x = getchar();
				if (x == '\n')
					break;
				sum += x - '0'; 
			}
		}
	printf("%d\n", sum);
	}

	return 0;
}