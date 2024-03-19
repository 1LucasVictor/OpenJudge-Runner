#include <stdio.h>

int prime(int n);

int main(void){
	int n;
	while(scanf("%d", &n) != EOF){
		printf("%d\n", prime(n));
	}

	return 0;
}

int prime(int n){
	int i, j, count = 0, check = 0;
	if(n >= 2){
		count++;
	}

	for(i = 3;i <= n;i += 2){
		for(j = 3;j <= i;j += 2){
			if(i % j == 0){
				check++;
			}
		}
		if(check == 1){
			count++;
		}

		check = 0;
	}

	return count;
}