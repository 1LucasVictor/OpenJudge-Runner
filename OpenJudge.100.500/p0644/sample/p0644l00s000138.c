#include <stdio.h>

int main(void){
	
	int s, i , count;
	
	scanf("%d", &s);
	count = 0;
	for( i = 0; i < 3; i++ ){
		if( s % 10 == 1 ) count++;
		s /= 10;
	}
	printf("%d\n", count);
	
	return 0;
}