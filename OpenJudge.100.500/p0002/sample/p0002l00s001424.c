#include <stdio.h>

int main(void)
{
	int a[3];
	int b[2];
	int max;
	int i;
	int j = 0;
	int n;
	int m = 0;
	
	scanf("%d", &n);
	while (m < n){
		
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
		max = a[0];
		for (i = 0; i < 3; i++){
			if (max <= a[i]){
				max = a[i];
			}
		}
	
		for (i = 0; i < 3; i++){
			if (max > a[i]){
				b[j] = a[i];
				j++;
			}
		}
	
		if ((max * max) == (b[0] * b[0]) + (b[1] * b[1])){
			printf("YES");
		}
		else {
			printf("NO");
		}
		printf("\n");
		m++;
	}
		
	return(0);
}