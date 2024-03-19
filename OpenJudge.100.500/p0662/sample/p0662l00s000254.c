#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int a, b, c, d, result;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	result = (int)( fmin((double)b, (double)d) - fmax((double)a, (double)c) );
	if( result < 0 ){
		result = 0;
	}
	printf("%d", result);
	
	return 0;
	
}