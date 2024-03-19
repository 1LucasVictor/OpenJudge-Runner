#include <stdio.h>

int main(void) {
	char num[3];
	scanf("%s",num);
	int a = 0 ;
	if (num[0] == '1') a++;
	if (num[1] == '1') a++;
	if (num[2] == '1') a++;
	printf("%d",a);
	return 0;
}