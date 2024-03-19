#include <stdio.h>

int main()
{
	int i, j, k, s, t, a;

	while (1) {
		scanf("%d %d", &s, &t);
		if (s == 0 && t == 0) break;
		a = 0;
		for (i = 1; i <= s; i++) {
			for (j = i + 1; j <= s; j++) {
				for (k = j + 1; k <= s; k++) {
					if (i + j + k == t)
						a++;
				}
			}
		}
		printf("%d\n", a);
	}
		return 0;
	
}
