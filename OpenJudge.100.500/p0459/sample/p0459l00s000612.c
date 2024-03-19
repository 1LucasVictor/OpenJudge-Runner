#include<stdio.h>
int main() {

	int x,y;

	scanf("%d%d", &x, &y);

	if ((x * 2 <= y) && (x * 4 >= y) && (y % 2 == 0))
		printf("Yes");
	else
		printf("No");

	return 0;

}