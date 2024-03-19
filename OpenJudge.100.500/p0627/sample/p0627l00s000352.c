#include <stdio.h>
int main(void){
	int a, b;

	scanf("%d %d", &a, &b);

	int max = a + b;

	if( a - b > max ){
		max = a - b;
    }
	if( a * b > max ){
		max = a * b;
	}
    printf("%d", max);
	return 0;
}