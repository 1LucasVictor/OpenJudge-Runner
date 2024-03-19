#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b;

	scanf("%d",&a);
	scanf("%d",&b);
	if(a>8 || b>8)
		printf(":(");
	else
		printf("Yay!");
	return 0;
}