#include <stdio.h>

int main(void)
{
	int max;
	int n, i;
	int t, s;

	while (scanf("%d", &n), n){

		max = -9e6;
		t = 0;
		for (i = 0; i < n; i++){
			scanf("%d", &s);
			t += s;
			max = fmax(t, max);
			if (t < 0) t = 0;
		}

		printf("%d\n", max);
	}
	return (0);
}