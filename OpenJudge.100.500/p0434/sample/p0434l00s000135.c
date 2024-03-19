#include <stdio.h>

int main() {

	int a = 0;

	scanf("&d", &a);

	if (-40 <= a <= 40)
	{
		if (a >= 30)
		{
			printf("Yes");
		}
		if (a < 30)
		{
			printf("No");
		}
	}



	return 0;
}