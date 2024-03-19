#include<stdio.h>
#include<string.h>

int main() {
	char s[200000], t[200000];
	scanf("%s", s);
	scanf("%s", t);
	long long ans = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] != t[i]) ans++;
	}
	printf("%lld", ans);

	return 0;
}