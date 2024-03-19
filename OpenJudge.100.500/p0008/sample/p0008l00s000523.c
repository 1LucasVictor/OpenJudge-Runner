#include <stdio.h>

char a[1000001];

int main(void)
{
	int n;
	int i, j;
	int cnt;
	
	a[0] = a[1] = 1;
	
	for (i = 2; i * i <= 1000000; i++){
		for (j = i * i; j <= 1000000; j += i){
			a[j] = 1;
		}
	}
	
	while (scanf("%d", &n) != EOF){
		cnt = 0;
		for (i = 2; i <= n; i++){
			if (a[i] == 0){
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	
	return (0);
}