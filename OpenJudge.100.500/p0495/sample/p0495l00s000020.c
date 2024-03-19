#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>




int ASCttenannoryaku(const void *a,const void *b) {
	return *(int *)a - *(int *)b;
}
int main(void)
{
	char s[4];
	scanf("%s",s);
	int a = 0, b = 0;
	for (int i = 0; i < 3; i++) {
		if (s[i] == 'A')
			a++;
		else b++;
	}
	if (a > 0 && b > 0)
		printf("Yes");
	else
		printf("No");
	return 0;
}