#include <stdio.h>

void InputString(char* string);
void Converting(char* string);
void Printing(char* string);

int main(void) {
	char string[1200];

	InputString(string);
	Converting(string);
	Printing(string);
}

void InputString(char* string) {
	scanf("%[^\n]s", string);
}

void Converting(char* string) {
	int sub = 'a' - 'A';

	char* tmp = string;
	while (*tmp) {
		if (*tmp >= 'a' && *tmp <= 'z') {
			*tmp -= sub;
		} else
		if (*tmp >= 'A' && *tmp <= 'Z') {
			*tmp += sub;
		}
		tmp++;
	}
}

void Printing(char* string) {
	printf("%s\n", string);
}
