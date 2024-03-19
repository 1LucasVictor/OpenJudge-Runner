#include<stdio.h>
int main(void)
{
	char s[3];
	int i;
	int c = 0;

	
		scanf("%s", &s);
	for (i = 0;i<3;i++) {
		if (s[i] == '1') {
			c++;
		}
	}
	printf("%d", c);
	return 0;
}