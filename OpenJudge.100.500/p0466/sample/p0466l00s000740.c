#include<stdio.h>
#include<string.h>

int main() {
	char s[11], t[12];
	int f = 0,n;
	scanf("%s", s);
	scanf("%s", t);
	n = strlen(s);
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == t[i]) {}
		else {
			f = 1;
		}
	}
		if (f == 0) {
			printf("Yes");
		}
		else {
			printf("No");
		}
}