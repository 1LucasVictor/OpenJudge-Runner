#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char input[10];
	int n;
	int i;
	int temp;
	
	fgets(input, sizeof(input), stdin);
	n = atoi(input);
	
	for (i = 1; i <=n; i++){
		if (i % 3 == 0){
			printf(" %d", i);
		}else if (i % 10 == 3){
			printf(" %d", i);
		}else{
			temp = i / 10;
			while (temp){
				if (temp % 10 == 3){
					printf(" %d", i);
					break;
				}
				temp /= 10;
			}
		}
	}
	
	printf("\n");
	
	return 0;
}