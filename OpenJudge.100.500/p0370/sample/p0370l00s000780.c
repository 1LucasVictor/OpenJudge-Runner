#include <stdio.h>

int main(void)
{
	int ka, ki;
	char ku;
	

	while (1){

		scanf("%d %c %d", &ka, &ku, &ki);

		if (ku == '+'){
			printf("%d\n", ka + ki);
		}
		else if (ku == '-'){
			printf("%d\n", ka - ki);
		}
		else if (ku == '*'){
			printf("%d\n", ka * ki);
		}
		else if (ku == '/'){
			printf("%d\n", ka / ki);
		}
		else break;
	}
	return 0;
}