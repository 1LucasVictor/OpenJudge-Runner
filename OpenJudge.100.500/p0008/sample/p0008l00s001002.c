#include<stdio.h>

int main(void){
	int x, y, n, i, t;
	while (scanf("%d", &n) != EOF){
		t = 0;
		for (x = 1; x < n + 1; x++){
			i = 0;
			for (y = 1; y <= x; y++){
				if (x%y == 0){
					i++;
				}
			}
			if (i == 2){
				t++;
			}
		}
		printf("%d\n", t);
	}
	return 0;
}