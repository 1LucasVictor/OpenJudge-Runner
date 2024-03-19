
#include <stdio.h>
#include <math.h>

int main(void)
{

	int D;
	int N;

	scanf("%d %d\n",&D,&N);

	float P;
	
	if (N != 100) P = pow(100,D) * N;
	else P = pow(100,D) * (N-1);
	
	printf("%.0f\n",P);

	return 0;
}
