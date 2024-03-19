#include <stdio.h>


int main(){
	int a, b;
	scanf("%i %i", &a, &b);
	if(a+b>16)
		printf(":(\n");
	else{
		if(b>a && 2*a>=b){
			printf("Yay!\n");
			
		}
		else
		if( 2*b>=a){
			printf("Yay!\n");
			
		}
	}
}
