#include <stdio.h>

int main(void){
	char in;
	int count = 0;
	int stack = 0;

	while((in = getchar()) != '\n'){
		if(in == '1'){
			if(stack < 0)count++;
			stack++;
		}else{
			if(stack > 0)count++;
			stack--;
		}
	}
	printf("%d\n", count * 2);
	return 0;
}
