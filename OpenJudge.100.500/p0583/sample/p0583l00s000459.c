#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, A, B, C, D;
	char S[200001] = {};
	scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
	scanf("%s", &(S[1]));

	int a = A, b = B, flag = 1;
	if (C < D) {
		while (b < D) {
			if (S[b+1] == '.') b++;
			else if (b < D - 1 && S[b+2] == '.') b += 2;
			else break;
		}
		if (b < D) flag = 0;
		while (a < C) {
			if (S[a+1] == '.') a++;
			else if (a < C - 1 && S[a+2] == '.') a += 2;
			else break;
		}
		if (a < C) flag = 0;
	} else {
		while (b < D) {
			if (S[b-1] == '.' && S[b+1] == '.') break;
			else if (S[b+1] == '.') b++;
			else if (b < D - 1 && S[b+2] == '.') b += 2;
			else break;
		}
		if (b < D && (S[b-1] == '#' || S[b+1] == '#')) flag = 0;
		if (b == D) S[b] = '#';
		while (a < C) {
			if (S[a+1] == '.') a++;
			else if (a < C - 1 && S[a+2] == '.') a += 2;
			else break;
		}
		if (a < C) flag = 0;
	}
	
	if (flag == 1) printf("Yes\n");
	else printf("No\n");
	fflush(stdout);
	return 0;
}