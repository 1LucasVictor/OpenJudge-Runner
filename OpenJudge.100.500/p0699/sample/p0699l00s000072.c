#include <stdio.h>

int main(void) {
	int N[3], count5 = 0, count7 = 0;

	if (scanf("%d %d %d", &N[0], &N[1], &N[2]) >= 10) return 0;
	
	for (int i = 0; i < 3; i++) {
		if (N[i] == 5)count5++;
		if (N[i] == 7)count7++;
	}

	if (count5 == 2 && count7 == 1)printf("YES\n");
	else printf("NO\n");
	

	return 0;

}