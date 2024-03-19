#include <stdio.h>

int main(void){
	char number[1001];
	int num, i;

	for (;;){
		num = 0;
		scanf("%s", number);
		for (i = 0; i < 1001; i++){
			if (number[i] == '\0'){
				break;
			}else{
				num += number[i] - '0';
			}
		}
		if (num != 0){
			printf("%d\n", num);
		}else{
			break;
		}
	}

	return 0;
}