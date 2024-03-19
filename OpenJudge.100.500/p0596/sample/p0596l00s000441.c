#include <stdio.h>
#include <string.h>

int main() {
	char S[100000];
	scanf("%s",S);
	int n=strlen(S),cnt=0;
	for (int i = 0; i < n; i++) {
		if (S[i] == '0') cnt++;
	}
	int answer=((n-cnt) > cnt) ? cnt : (n-cnt);
	answer = 2*answer;
	printf("%d\n",answer);
	return 0;
}