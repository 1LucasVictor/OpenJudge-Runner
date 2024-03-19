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
	long A=0;
	double B=0;
	long lK=0;
	long lTotal=0;
	long lCnt=0;
	long i,j;
	scanf("%ld %lf", &A,&B);
	long B2=(long)(B*100);
	long C=(long)A*B2/100;
	printf("%ld\n",C);
	return 0;
}