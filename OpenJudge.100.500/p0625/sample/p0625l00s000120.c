#include <stdio.h>


int main(){
	int a, b;
	scanf("%i %i", &a, &b);
	if(a+b>16)
		printf(":(");
	else{
		if(a<=8 && b<=8){
			printf("Yay!");
		}
		else
			printf(":(");
	}
}
