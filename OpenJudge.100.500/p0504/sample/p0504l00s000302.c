#include <stdio.h>

int main() {
	int helt;
	int atk;
	scanf("%d%d", &helt, &atk);
	int nmbr = helt/atk;
	printf("%d\n", nmbr+1);
	
	return 0;
}