#include <stdio.h>


int keisan(int s[], int q[],int I,int Q)//ここでは、ポインタを渡すっていう考え方！！
{
	int i, t= 0;
	int count = 0;

	for (i = 0; i < I; i++)
	{
		for (t= 0; t < Q; t++)
		{
			if (s[i] == q[t])
			{
				count++;
			}
		}
	}

	return count;

}



int main(void)
{

	int i, q, t = 0;
	int S[1000];
	int Q[1000];

	
	scanf("%d", &i);
	for (t = 0; t < i; t++)
	{
		scanf("%d", &S[t]);
	}

	
	scanf("%d", &q);
	for (t = 0; t < q; t++)
	{
		scanf("%d", &Q[t]);
	}

	

	printf("%d\n", keisan(S, Q, i, q));
	return 0;

}
	
