#include <stdio.h>

int main() {
	int a, b, c, d, e, k, check = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &k);

	if ((b - a) > k)
		check++;
	if ((c - a) > k)
		check++;
	if ((d - a) > k)
		check++;
	if ((e - a) > k)
		check++;
	if ((e - b) > k)
		check++;
	if ((e - c) > k)
		check++;
	if ((e - d) > k)
		check++;

	if (check == 0)
		printf("Yay!\n");
	else
		printf(":(\n");

	return 0;
}