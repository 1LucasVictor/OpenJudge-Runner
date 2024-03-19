#include <stdio.h>

int main() {
	int i;
	char str[1200];

	i = 0;
	while (1) {
		scanf("%c", &str[i]);
		if (str[i] == '\n') {
			break;
		}
		i++;
	}

	i = 0;
	while (1) {
		if (str[i] == '\0') {
			break;
		}
		else if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
		else if(str[i]>97&&str[i]<=122){
			str[i] -= 32;
		}
		i++;
	}

	i = 0;
	while (1) {
		if (str[i] == '\n') {
			break;
		}
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return 0;
}