#include<stdio.h>

int main(void){
	int a = 100000;
	int x, y, i;
	scanf("%d", &x);
	for (i = 0; i < x; i++){
		a = a*1.05;
		if (a % 100 != 0){
			a = a / 1000;
			a = (a + 1) * 1000;
		}
	}
	printf("%d\n", a);
	return 0;
}