#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

#define __STDC_FORMAT_MACROS

int main(void)
{
	int32_t knownCats, unknown, sumCats;

	scanf("%I32d %I32d %I32d", &knownCats, &unknown, &sumCats);

	printf("%s", ((knownCats <= sumCats) && (sumCats <= knownCats + unknown)) ? "YES" : "NO");

	return 0;
}
