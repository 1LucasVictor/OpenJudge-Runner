#include <stdio.h>

int main(void)
{
	
	int N,A,B,C,D;
	scanf("%d %d %d %d %d\n",&N,&A,&B,&C,&D);
	int i;
	int S[N+1];
	char w;
	for(i=1; i < N+1; i++)
	{
		scanf("%c",&w);
		if(w=='#') S[i] = 1;
		else if(w=='.') S[i] = 2;
	}
	int ans = 0;
	if(C < D)
	{
		for(i = A; i < D; i++)
		{
			if(S[i] == 1 && S[i+1] == 1)
			{
				printf("No");
				return 0;
			}
		}
		printf("Yes");
	}
	else if(D < C)
	{
		for(i = A; i < C; i++)
		{
			if(S[i] == 1 && S[i+1] == 1)
			{
				ans = 1;
			}
		}
		for(i = B; i <= D; i++)
		{
			if(S[i] == 2 && S[i+1] == 2 && S[i-1] == 2 && ans == 0) ans = 2;
		}
		if(ans == 0) ans = 1;
	}
	if(ans == 2) printf("Yes");
	else if(ans == 1) printf("No");
	//printf("C = %d, D = %d, ans = %d\n",C,D,ans);
	return 0;
}
