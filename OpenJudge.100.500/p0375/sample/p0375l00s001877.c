#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);

	int i = 1;
	while (i++ < n){
		int x = i;
		if (x % 3 == 0){
			printf(" %d", i);
		}
		else{
			while (x){
				if (x % 10 == 3){
					printf(" %d", i);
					break;
				}
				x = x / 10;
			}
		}
	}
	putchar('\n');


	return 0;
}
