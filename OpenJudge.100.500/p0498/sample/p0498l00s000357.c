#include <stdio.h>

int main(void){
	int input,output;
	double a=0.0;
	scanf("%d",&input);
	
	a = (double)input/2.0;
	if( a > (double)(input/2) ){
		a = a + 1.0;
	}
	output = (int)a;
	printf("%d\n",output);
	return 0;
}