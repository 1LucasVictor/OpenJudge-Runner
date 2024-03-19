#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	long int n, l;
	long int i, j;
	long int min_abs = 1000;
	long int min;
	char s[5];
	
	scanf("%s", s);
	
	for(i = 0; i < 3; i++) {
		if(s[i] == s[i + 1]) {
			printf("Bad\n");
			return 0;
		}
	}
	
	
	printf("Good\n");
	
	return 0;
}