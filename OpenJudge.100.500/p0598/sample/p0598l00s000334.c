#include<stdio.h>


int main (void){
	int a = 0;
	int b = 0;

	scanf("%d",&a);
	scanf("%d",&b);
	
	if(b % a == 0){
		printf("%d\n",a + b);
	}
	else{
		printf("%d\n",b - a);
	}
}