#include <stdio.h>

int	main()
{
	int N,A[200010],i,j;

	scanf("%d",&N);

	while(N)
	{
		scanf("%d",&A[i]);
		i++;
		N--;
	}
	i = 0;
	while(A[i]  != '\0')
	{
		while(A[j] != '\0')
		{
			if(i == j)
				j++;
			else if(A[i] == A[j])
				printf("NO\n");
		
			j++;
		}
		j = 0;
		i++;
	}
	if(A[i] == '\0')
		printf("YES\n");

	return 0;
}
