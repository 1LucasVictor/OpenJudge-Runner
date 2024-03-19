/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int DESC(const int *a,const int *b){
	return (*b - *a);
}

void append(int *array,int *size,int num){
	realloc(array, sizeof(int) * (*size + 1));
	array[(*size)] = num;
	++(*size);
}

int main(int argc, char const *argv[])
{
	int n,a,b,c,d;
	int bsize = 0,*block,bcnt = 0;
	char s[200003];
	scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
	scanf("%s",s);
	block = (int *)malloc(sizeof(int) * bsize);

	for (int i = 0; i + 1 < n; ++i)
	{
		if(s[i] == '#'){
			append(block,&bsize,bcnt);
			bcnt = 0;
			if(s[i + 1] == '#'){
				puts("No");
				return 0;
			}
		}
		else	++bcnt;
	}
	if(c < d){
		puts("Yes");
		return 0;
	}
	else if(c > d){
		qsort(block,bsize,sizeof(int),DESC);
		if(block[0] >= 3)	puts("Yes");
		else puts("No");
		return 0;
	}
}
