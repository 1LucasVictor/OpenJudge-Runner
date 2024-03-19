#include<stdio.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
	入力例：
	3
	1 1 3
*/

int main(){
	long lN;
	scanf("%ld", &lN);
	printf("%ld\n",lN + lN * lN + lN * lN * lN);
 return 0;
}