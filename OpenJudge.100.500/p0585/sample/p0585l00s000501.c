#include <stdio.h>

int main(void)
{
	int a,b,t;
	
	int i;
	
	scanf("%d %d %d",&a,&b,&t);
	
	double time = t + 0.5;
	
	int sum = 0;
	
	for(i = 1; time > a * i; i++){
		sum = sum + b;
	}
	
	printf("%d\n",sum);
	
	return 0;
	
}	