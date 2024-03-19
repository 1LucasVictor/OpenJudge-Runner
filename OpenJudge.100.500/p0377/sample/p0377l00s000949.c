#include<stdio.h>

int main(void)
{
	int n, i, t;
	int S[14], H[14], C[14], D[14];
	char A, temp[50];

	for(i=1; i<=13; i++)
	{
		S[i] = 1;
		H[i] = 1;
		C[i] = 1;
		D[i] = 1;
	}

	scanf("%d\n", &n);
	for( i = 0; i < n; i++)
	{
		scanf("%c %d\n", &A, &t);
		if( 'S' == A )
			S[t] = 0;
		else if( 'H' == A )
			H[t] = 0;
		else if( 'C' == A )
			C[t] = 0;
		else if( 'D' == A )
			D[t] = 0;
	}

	for(i=1; i<=13; i++)
		if(S[i])
			printf("S %d\n", i);
	for(i=1; i<=13; i++)
		if(H[i])
			printf("H %d\n", i);
	for(i=1; i<=13; i++)
		if(C[i])
			printf("C %d\n", i);
	for(i=1; i<=13; i++)
		if(D[i])
			printf("D %d\n", i);

	return 0;
}
