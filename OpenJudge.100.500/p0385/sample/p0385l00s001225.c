#include <stdio.h>

int main(void){
	char num[1001];
	long int sum;

	while (1){
		scanf("%s", num);

		if (num[0] == '0') break;

		sum = 0;
		for (int i = 0; i < 1001; i++){
			if (num[i] == '\0') break;

			sum += num[i] - '0';
		}

		printf("%d\n", sum);
	}
	
	return 0;
}