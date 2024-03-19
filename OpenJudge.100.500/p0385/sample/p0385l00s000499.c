#include <stdio.h>

int main(int argc, char** argv)
{
	char str[1001];
	int i;

	while (1) {
		memset(str, '\0', sizeof(str));
		scanf("%s", &str);

		if (str[0] == '0') {
			break;
		}

		int sum = 0;
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] >= '0' && str[i] <= '9') {
				sum += (str[i] - 0x30);
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}