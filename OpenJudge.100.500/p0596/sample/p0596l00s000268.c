#include <stdio.h>

int main()
{
	int count_0 = 0;
	int count_1 = 0;
	char c;

	do{
		scanf("%c", &c);
		if (c == '0')
			count_0++;
		if (c == '1')
			count_1++;
	} while (c != '\n');
	if (count_0 < count_1)
		printf("%d\n", count_0 * 2);
	else
		printf("%d\n", count_1 * 2);
}