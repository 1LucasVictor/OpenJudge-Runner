#include <stdio.h>

int main(void)
{
	int N;
	int a[100];
	int b[100];
	int c[100];
	int i;
	int sanhei[100];
	int syahen[100];
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++){
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
		
		if ((a[i] - b[i] >= 0) && (a[i] - c[i] >= 0)){
			syahen[i] = a[i];
			sanhei[i] = b[i] * b[i] + c[i] * c[i];
		}
		else if ((b[i] - a[i] > 0) && (b[i] - c[i] >= 0)){
			syahen[i] = b[i];
			sanhei[i] = a[i] * a[i] + c[i] * c[i];
		}
		else if ((c[i] - b[i] > 0) && (c[i] - a[i] > 0)){
			syahen[i] = c[i];
			sanhei[i] = a[i] * a[i] + b[i] * b[i];
		}
	}
	
	for (i = 0; i < N; i++){
		if (sanhei[i] == syahen[i] * syahen[i]){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return (0);
}