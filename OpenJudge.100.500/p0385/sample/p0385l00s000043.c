#include <stdio.h>
#include<string.h>

int main(void){
	char number[1001];
	int i, sum=0;
	
	while(1){
		scanf("%s", number);
		if(number[0] == '0'){
			break;
		}
		for(i=0; i<strlen(number); i++){
			sum += number[i] - '0';
		}
		printf("%d\n", sum);
		sum = 0;
	}	
	return 0;
}