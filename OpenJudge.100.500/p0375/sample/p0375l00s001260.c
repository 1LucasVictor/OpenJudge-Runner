#include <stdio.h>

int main(void){
	int data;
	int i;
	
	scanf("%d", &data);

	for(i=1 ; i <= data ; i++){
		if(i % 3 == 0 || i % 10 == 3){
			printf(" ");
			printf("%d", i);
		}
	}
	printf("\n");
}