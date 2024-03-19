#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEF_ELM_S_MAX 100005

char S[DEF_ELM_S_MAX];
	int N;
	int ans = 0;

/////////////////////////////////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////////////////////////////////
void linearSearch(int key)
{
	int i;
	int ret =0;

	i = 0;
	S[N] = key;
	while (S[i] != key) {
		i++;
	}
	if (i == N) {
		return;
	}
	ans++;
	return;
}
/////////////////////////////////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////////////////////////////////
int main(void)
{
	int i;
	int Q;
	int val;

//
	scanf("%d", &N);
	for ( i = 0 ; i < N ; i++ ) {
		scanf("%d", &S[i]);
	}

	scanf("%d", &Q);
	for ( i = 0 ; i < Q ; i++ ) {
		scanf("%d", &val);
		linearSearch(val);
	}

	printf("%d\n", ans);

	return 0;
}