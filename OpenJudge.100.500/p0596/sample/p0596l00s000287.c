#include <stdio.h>

char S[114514];

int asumisu;
char mizuhasu[114514];

int main(void) {
	int i;
	int kitaeri = 0;
	if (scanf("%114513s", S) != 1) return 1;
	mizuhasu[0] = '#';
	asumisu = 0;
	for (i = 0; S[i] != '\0'; i++) {
		if (mizuhasu[asumisu] == (S[i] == '0' ? '1' : '0')) {
			kitaeri += 2;
			asumisu--;
		} else {
			mizuhasu[++asumisu] = S[i];
		}
	}
	printf("%d\n", kitaeri);
	return 0;
}
