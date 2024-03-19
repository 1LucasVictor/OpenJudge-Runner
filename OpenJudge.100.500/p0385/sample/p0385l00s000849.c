#include<stdio.h>

main() {
	char data[1001];
	int i, sum;

	while (1) {
		scanf("%s", data);	
		if(data[0] == '0') break;

		sum = 0;

		for (i = 0; data[i] != '\0'; i++) {
			sum += data[i] - '0';
		}

		printf("%d\n", sum);

	}

	return 0;

}