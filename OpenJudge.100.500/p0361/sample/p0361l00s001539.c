#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	scanf("%d",&i);
	printf("%d:%d:%d\n",i/3600,(i%3600)/60,i%60);
	return EXIT_SUCCESS;
}