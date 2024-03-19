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
	int i, j, n, a[5000], sum=-100000, buf=0;
	
	while(1){
		scanf("%d", &n);
		if(n==0)
			break;
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);

		for(i=0; i<n; i++){
			for(j=i; j<n; j++){
				buf += a[j];
				if(sum < buf)
					sum = buf;
			}
			buf = 0;
		}
		printf("%d\n", sum);
		sum=-100000;
	}
	return 0;
}