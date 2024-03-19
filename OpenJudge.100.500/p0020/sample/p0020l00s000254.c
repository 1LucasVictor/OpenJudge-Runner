#include <stdio.h>

int main(void)
{
	float x[4], y[4]; 
	int loop_n, i;
	scanf("%d", &loop_n);
	
	for (i=0; i<loop_n; i++) {
		scanf("%f %f %f %f %f %f %f %f", &x[0], &y[0], &x[1], &y[1],
										 &x[2], &y[2], &x[3], &y[3]);
		
		if (x[0] - x[2] == x[1] - x[3] && y[0] - y[2] == y[1] - y[3]) printf("YES\n");
		else				  printf("NO\n");
	}
	
	return 0;
}