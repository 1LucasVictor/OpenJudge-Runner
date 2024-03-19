#include<stdio.h>
int main(void){
	int a[3], b, c, i;

	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	for (c = 0; c < 2; c++){
		for (i = 0; i < 2; i++){
			if (a[i]>a[i + 1]){
				b = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b;
			}
		}
	}
	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}