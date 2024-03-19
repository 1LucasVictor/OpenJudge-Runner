#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k, n, saida;
	scanf("%d",&n);
	int vetor[n], impostor[n];

	for (i = 0; i < n; i++)
	{
		scanf("%d",&vetor[i]);
		impostor[i] = vetor[i];
	}

	for (j = 0; j < n; j++)
	{
		//printf("V: %d\n",vetor[j]);

		for (k = j + 1; k < n; k++)
		{
			//printf("I: %d\n",impostor[k]);
			if (vetor[j] == vetor[k])
			{
				saida = 1;
				break;
			}
		}
	}

	if (saida != 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

/*	for(int j = 0; j<n; j++)
	{
		printf("%d ",vetor[j]);
	}
*/
	return 0;
}