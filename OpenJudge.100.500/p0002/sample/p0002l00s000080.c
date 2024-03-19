#include <stdio.h>

int main(void)
{
	int N;
	int i, j, k;
	int a[3];
	int hozon;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++){
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		for (j = 0; j < 3; j++){
			for (j = 2; j > 0; j--){
				hozon = a[j];
				a[j] = a[j - 1];
				a[j - 1] = hozon;
			}
			if (a[0] * a[0] == a[1] * a[1] + a[2] * a[2]){
				printf("YES\n");
				break;
			}
			else {
				printf("NO\n");
				break;
			}
		}
	}
	
	return (0);
}