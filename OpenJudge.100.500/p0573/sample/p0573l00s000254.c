#include<stdio.h>
int main(void) {
	char s[5];
	int c[4] = {0,0,0,0};
	scanf("%s", s);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (s[i] == s[j] && i!=j) {
				c[i]++;
			}
		}
	}
	if (c[0] == 1 && c[1] == 1 && c[2] == 1 && c[3] == 1) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}







