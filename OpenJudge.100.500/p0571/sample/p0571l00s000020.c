#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define ll long long int
#define lim 100010
#define mod 1e9+7
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))

int main(void){
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	if(b/n>=a)printf("%d",n*a);
	else		printf("%d",b);
	
	
	return 0;
}