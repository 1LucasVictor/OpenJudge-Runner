#include<stdio.h>
int main(){
	long int x,y,z,a,b;
	scanf("%ld",&x);
	if(x%500!=0){
		y=x/500;
		z=x%100;
		b=z%5;
		a=(y*1000)+(b*5);	
	}
	else{
		a=2*x;
	}
	printf("%ld",a);
	return 0;
}