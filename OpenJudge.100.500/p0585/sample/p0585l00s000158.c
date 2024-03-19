#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, t;
	
	scanf("%d %d %d", &a, &b, &t);
	
	int c = t/a;
	
	int sum = b*c;
	
	printf("%d\n", sum);

	return 0;
}
