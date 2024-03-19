#include<stdio.h>

int main(void){
	char x;
	scanf("%c",&x);
	printf("%c", x);
	scanf("%c",&x);
	if((int)x == 66){
		printf("R");
	}
	else{
		printf("B");
	}
	scanf("%c",&x);
	printf("%c\n", x);
	return 0;
}