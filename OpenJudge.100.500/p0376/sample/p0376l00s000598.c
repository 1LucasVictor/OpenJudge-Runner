#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include <string.h>
#include<limits.h>
int main(void){
	int x, y, z, i;
	/////////////////////////
	scanf("%d", &x);
	int a[1000];
	for (i = 0; i < x; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i +1< x; x--) {
		printf("%d ", a[x - 1]);
	}
	printf("%d", a[x -1]);












	/////////////////////////
	printf("\n");
	return 0;
}
