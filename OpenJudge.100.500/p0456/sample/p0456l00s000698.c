#include<stdio.h>

static char S[200000];
static char T[200000];

void main()
{
	int scanCheck;
	int a, i;
	int cnt = 0;

	
	scanCheck = scanf("%s", S);
	scanCheck = scanf("%s", T);

	for (i = 0; i < 200000; i++) {
		if (S[i] != T[i]) {
			cnt++;
		}
	}
	printf("%d", cnt);
}

//scanCheck = scanf("%d", &a);
//printf("%d", a);