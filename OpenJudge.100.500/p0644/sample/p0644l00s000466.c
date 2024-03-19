#include <stdio.h>

int main() {
	int m = 0;
	char s[5];
	scanf("%s", s);
	for(int i = 0; i < 3; i++) {
		if (s[i] == '1')
			m++;
	}
	printf("%d\n", m);
	return 0;
}
