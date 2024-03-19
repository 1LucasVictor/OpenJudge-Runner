#include <stdio.h>
#include <math.h>

int main(void){
	int a, b;

	while(~scanf("%d %d",&a,&b))
		printf("%d\n",(int)log10(a+b)+1);

	return 0;
}