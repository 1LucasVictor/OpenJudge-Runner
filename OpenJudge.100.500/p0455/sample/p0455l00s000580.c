#include <stdio.h>

int main(){
	int input;
	scanf("%d", &input);
	
	int two = input * input;
	int three = input * input * input;
	int final = input + two + three;
	
	printf("%d", final);
	return 0;
}