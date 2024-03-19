#include<stdio.h>

int main(void){
	int ans[4], count, n;

	while (scanf("%d", &n) != EOF){
		count = 0;
		for (ans[0] = 0; ans[0] <= 9; ans[0]++){
			for (ans[1] = 0; ans[1] <= 9; ans[1]++){
				for (ans[2] = 0; ans[2] <= 9; ans[2]++){
					for (ans[3] = 0; ans[3] <= 9; ans[3]++){
						if (ans[0] + ans[1] + ans[2] + ans[3] == n) count++;
					}
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}