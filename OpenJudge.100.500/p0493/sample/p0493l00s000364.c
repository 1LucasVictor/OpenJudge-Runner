#include <stdio.h>

int main(void)
{
	int genkin;
	int happy;

	scanf("%d", &genkin);

	happy = genkin / 500 * 1000;
	genkin = genkin % 500;

	happy = happy + (genkin / 5 * 5);

	printf("%d\n", happy);

	return (0);
}
