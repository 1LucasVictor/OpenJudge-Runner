#include <stdio.h>

int s[1000000];
int main(void)
{
	int a;
	int i, j, k;
	int cnt = 0;
	
	for (i = 0; i < 1000000; i++) {
		s[i] = 1;
	}
	s[0] = 0;
	
	for (i = 2; i * i < 1000000; i++) {
		for (j = 2; i * j < 1000000; j++) {
			if (i % j == 0) {
				for (k = j; i * k < 1000000; k++) {
					 s[i * k] = 0;
				}
			}
		}
	}
	
	while (scanf("%d", &a) != EOF){
		cnt = 0;
		for (i = 2; i <= a; i++) {
			if (s[i] == 1) cnt++;
		}
		printf("%d\n", cnt);
	}
	
	return (0);
}