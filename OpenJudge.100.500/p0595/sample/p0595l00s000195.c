#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int a,b,k,temp;
	int j = 0,v[100];
	scanf("%d %d %d",&a,&b,&k);
	for (int i = 1; i <= (a < b ? a : b); ++i){
		if(!(a % i) && !(b % i))	v[++j] = i;
	}
	printf("%d\n", v[j - k + 1]);
	return 0;
}