#include <stdio.h>
int main(void){
	int a,b,x,i=2,total=0;
	float t;
	scanf("%d %d %f", &a, &b, &t);
	x=a;
	while(x<=t+0.5){
		total+=b;
		x=i*a;
		i++;
	}
	printf("%d\n", total);
	return 0;
}