#include <stdio.h>

#define N 999999

int set[999999];
int an[30];

int main(void)
{
	int i, j, nam;
	int ans = 0;
	
	set[0] = 1;
	
	for (i = 2; i < N; i++){
		if (set[i - 1] == 0){
			for (j = 2; i * j <= N; j++){
				set[(i * j) - 1] = 1;
			}
		}
	}
	
	for (i = 0; i < 30 && scanf("%d", &nam) != EOF; i++){
		for (j = 0; j < nam; j++){
			if (set[j] == 0){
				ans += 1;
			}
		}
		an[i] = ans;
		ans = 0;
	}
	
	for (j = 0; j < i; j++){
		printf("%d\n", an[j]);
	}
	
	return (0);
}