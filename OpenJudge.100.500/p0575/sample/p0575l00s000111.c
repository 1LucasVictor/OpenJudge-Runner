#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define ll long long int
#define lim 100010
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))


int main(void){
	int x,a;
	scanf("%d%d",&x,&a);
	if(x<a)printf("0");
	else printf("10");
	return 0;
}