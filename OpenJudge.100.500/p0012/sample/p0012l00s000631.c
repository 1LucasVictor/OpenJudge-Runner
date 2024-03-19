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
	int i, j, k, num[32] = {0}, buf[32] = {0}, ans[32] = {0};

	for(i=0; i<32; i++)
		num[i] = -1;

	i=0;
	while(scanf("%d", &num[i]) != EOF)
		i++;

	j=0;
	k=0;

	for(i=0; i<32; i++){
		if(num[i] >= 1 && num[i] <= 10){
			buf[j] = num[i];
			j++;
		} else if(num[i] == 0){
			j--;
			ans[k] = buf[j];
			buf[j] = 0;
			k++;
		} else if(num[i] == -1)
			break;
	}

	for(i=0; i<32; i++){
		if(ans[i] == 0)
			break;
		printf("%d\n", ans[i]);
	}

	return 0;
}