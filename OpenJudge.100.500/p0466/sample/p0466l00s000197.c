#include<stdio.h>

int main(void)
{

	char s[20], t[20];
	scanf("%s", &s);
	scanf("%s", &t);


	for (int i = 0;s[i] != '\0';i++) {
		if (s[i] != t[i]) {
			printf("No");
			return 0;
		}
	}
	
	printf("Yes");

	return 0;
}