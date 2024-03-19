#include <stdio.h>
#define MAX 1000

int main(void){
	char c[MAX];
	int sum = 0, i;
	
	while(1){
		sum = 0;
		fgets(c, MAX, stdin);
		for(i = 0; c[i] != '\n'; i++){
			sum += (c[i] - '0');
		}
		if(sum == 0){
			break;
		}
		printf("%d\n", sum);
	}
	return 0;
}