#include <stdio.h>

int main(void)
{
	char last_week[4];
	char this_week[] = "ABC";

	scanf("%s", last_week);

	this_week[1] = (last_week[1] == 'B') ? 'R' : 'B';

	printf("%s\n", this_week);

	return 0;
}