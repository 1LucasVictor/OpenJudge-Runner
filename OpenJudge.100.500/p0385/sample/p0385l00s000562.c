#include <stdio.h>
#include <string.h>

int main(void){
	char number[1001];
	char *np;
	int i,sum;
	np = number;

	while(1){
		scanf("%s", number);
		if(number[0] == '0'){
			return 0;
		}

		i = 0;
		sum = 0;

		while(1){
			sum += *(np+i) - '0';
			i++;
			if(*(np+i) == '\0' || i > 1001){
				break;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}