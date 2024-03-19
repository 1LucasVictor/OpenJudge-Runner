#include <stdio.h>

int main(){
	int num, i;
	char number[1001] = {};
	while(1){
		scanf("%s", number);
		if(number[0] == '0')break;
		num = 0;
		for(i = 0; number[i] != '\0'; i++){
			num += number[i] - '0';
		}
		printf("%d\n", num);
	}
	return 0;
}