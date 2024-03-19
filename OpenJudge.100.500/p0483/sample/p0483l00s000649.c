#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>


int ASC(const void *a, const void *b) {
	return *(int *)b - *(int *)a;//降順
}


int main(void)
{
	char a[4];
	scanf("%s",a);
	if (a[0] == '7' || a[1] == '7' || a[2] == '7')
		printf("Yes");
	else
		printf("No");
	return 0;
}