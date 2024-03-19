#include <stdio.h>

int main() {

	int X = 0;

	scanf("%d", &X);

	if (-40 <= X <= 40)
	{
		if (X >= 30)
		{
			printf("Yes");
		}
		if (X < 30)
		{
			printf("No");
		}
	}

	return 0;
}