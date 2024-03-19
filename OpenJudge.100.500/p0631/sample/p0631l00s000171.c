#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int32_t cats, unknown, sum;

	scanf("%I32d %I32d %I32d", &cats, &unknown, &sum);

	printf("%s", sum - cats <= unknown ? "YES" : "NO");

	return 0;
}