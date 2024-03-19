#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
 
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
#include<malloc.h>

int main()
{
	int i, n, a[10];

	i=0;
	while(scanf("%d", &n) != EOF){
		if(n == 0){
			i--;
			printf("%d\n", a[i]);
			continue;
		}
		a[i] = n;
		i++;
	}
	return 0;
}