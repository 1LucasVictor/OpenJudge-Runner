#include <stdio.h>

int main(void)
{
	int ka;
	int a[1000], b[1000], c[1000];
	int N;
	
	scanf("%d", &N);
	
	for (ka = 0; ka < N; ka++){
		scanf("%d %d %d", &a[ka], &b[ka], &c[ka]);
		
		if (a[ka] * a[ka] + b[ka] * b[ka] != c[ka] * c[ka]){
			if (a[ka] * a[ka] + c[ka] * c[ka] != b[ka] * b[ka]){
				if (b[ka] * b[ka] + c[ka] * c[ka] != a[ka] * a[ka]){
					printf("NO\n");
				}
			}
		}
		else {
			printf("YES\n");
		}
	}
	
	return (0);
}