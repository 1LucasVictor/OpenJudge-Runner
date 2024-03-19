#include<stdio.h>
#include<string.h>

int main(void) {
	char text[1227], c1, c2;
	int ct1 = 0, ct2 = 0;

	scanf("%s", text);

	c1 = text[1];

	for (int i = 0; i < strlen(text); i++) {
		if (text[i] != c1)c2 = text[i];
	}

	for (int j = 0; j < strlen(text); j++) {
		if (text[j] == c1)ct1++;
		else if (text[j] == c2)ct2++;
	}

	if (ct1 == ct2) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}