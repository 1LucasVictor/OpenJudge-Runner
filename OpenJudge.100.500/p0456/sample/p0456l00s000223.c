#include <stdio.h>
#include <string.h>
char s[200001], t[200001];
int main() {
	scanf("%s%s", s, t);
	int ans = 0;
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] != t[i]) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
