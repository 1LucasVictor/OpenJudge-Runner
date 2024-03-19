#include<stdio.h>

int main(void){
	float x[4] = { 0.0 };
	float y[4] = { 0.0 };
	int n = 0;
	int i;
	scanf("%d", &n);
	while (n-- > 0){
		for (i = 0; i < 4; i++)
			scanf("%f %f", &x[i], &y[i]);
		for (i = 0; i < 4; i += 2) {
			x[i] -= x[i + 1];
			y[i] -= y[i + 1];
		}
		/*
		if (x[0] == 0.0 || x[2] == 0.0){
			if (x[0] == 0.0 && x[2] == 0.0)
				printf("YES\n");
			else
				printf("NO\n");
		}
		
		else*/ if ((y[0] / x[0]) == (y[2] / x[2]))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}