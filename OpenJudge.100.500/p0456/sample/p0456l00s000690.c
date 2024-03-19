#include<stdio.h>
 
static char S[200010];
static char T[200010];
 
void main()
{
	int scanCheck;
	int a;
	int cnt = 0;
 
	
	scanCheck = scanf("%s", S);
	scanCheck = scanf("%s", T);
 
	for (int i = 0; i < 200010; i++) {
		if (S[i] != T[i]) {
			cnt++;
		}
	}
	printf("%d", cnt);
}