#include <stdio.h>
#include <string.h>

int main(void)
{
	char num[1001] = {'0'};

	int sum = 0;

	int i;

	while (1) {
		scanf("%s", num);

		if(num[0] == '0')
		break;

		for(i = 0; i < strlen(num); i++){
			sum += num[i] - '0';
		}

		printf("%d\n", sum);

		sum = 0;
	}

	return 0;
}