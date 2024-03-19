#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

int main(void)
{
	int X,A,B;
	scanf("%d %d %d\n",&X,&A,&B);
	int after = B - A;
	if (after<=0){
		printf("delicious\n");
	}
	else if (after<=X){
		printf("safe\n");
	}
	else {
		printf("dangerous\n");
	}
	return 0;
}
