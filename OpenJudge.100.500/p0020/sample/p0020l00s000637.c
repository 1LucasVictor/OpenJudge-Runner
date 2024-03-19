#include <stdio.h>

int main(void)
{
	int n;
	float x[4], y[4];
	int i;

	scanf("%d", &n);

	while (n--){
		for (i = 0; i < 4; i++){
			scanf("%f %f", &x[i], &y[i]);
		}

		if ((x[1] - x[0]) * (y[1] - y[0]) + (x[3] - x[2]) * (y[3] - y[2])){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return (0);
}