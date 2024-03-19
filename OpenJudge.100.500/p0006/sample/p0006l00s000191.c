#include <stdio.h>

int main()
{
	int week, debt = 100000;
	scanf("%d", &week);
	while (week--) {
		debt *= 1.05;
		if (debt % 1000 != 0) {
			debt = (debt / 1000 + 1) * 1000;
		}
	}
	printf("%d\n", debt);
	return 0;
}