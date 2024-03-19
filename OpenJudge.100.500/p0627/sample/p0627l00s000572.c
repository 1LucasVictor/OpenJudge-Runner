#include <stdio.h>

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	int A,S,M;
	A = a+b;
	S = a-b;
	M = a*b;
	if(A>=S && A>=M) printf("%d\n",A);
	else if(S>=A && S>=M) printf("%d\n",S);
	else if(M>=A && M>=S) printf("%d\n",M);
	return 0;
}

