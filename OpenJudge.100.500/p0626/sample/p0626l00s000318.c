
#include <stdio.h>
#include <math.h>

int main(void)
{

	int D;
	int N;

	scanf("%d %d\n",&D,&N);

	float P;
	
	P = pow(100,D) * N;
	printf("%.0f\n",P);

	return 0;
}
