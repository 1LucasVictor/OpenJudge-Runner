#include <stdio.h>

int main(void){
	int d, c=0;
	while( (d=getchar()) != '\n' ) c+=d-'0';
	printf("%d\n", c);
	return 0;
}
