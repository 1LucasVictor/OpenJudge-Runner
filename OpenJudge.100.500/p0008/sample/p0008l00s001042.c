#include<stdio.h>

#define MAX 1000000
int total[MAX];

int main(void){
	int i, n, cnt;
	
	total[0] = total[1] = 0;
	for (i = 2; i < MAX; i++)total[i] = 1;

	for (i = 2; i*i < MAX; i++){
		if (total[i] == 1){
			for (n = i*2; n < MAX; n += i){
				total[n] = 0;
			}
		}
	}
	while (scanf("%d", &n) != EOF){
		cnt = 0;
		for (i = 0; i <= n; i++){
			cnt += total[i];
		}
		printf("%d\n", cnt);
	}
	return 0;
}