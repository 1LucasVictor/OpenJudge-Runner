# include <stdio.h>
# include <math.h>

int main()
{
	int D, N, tmp;
	scanf("%d %d", &D, &N);
	tmp = pow(100, D);
	tmp = tmp * N;
	printf("%d", tmp);
	
	return 0;
}