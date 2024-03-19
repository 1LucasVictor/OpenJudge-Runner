#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define ll long long int
#define lim 100010
#define mod 1e9+7
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))
#define num 2019
int main(void){
	ll l,r;
	scanf("%lld%lld",&l,&r);
	l %= num;
	r %= num;
	if(r<l){
		printf("0");
		return 0;
	}
	printf("%d",(l*(l+1))%num);
	
	
	return 0;
}