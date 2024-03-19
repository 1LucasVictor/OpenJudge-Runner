#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef long long int ll;
#define mod 1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define m0(x) memset(x,0,sizeof(x))

int main(void)
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(b%a==0) c=a+b;
	else c=b-a;
	printf("%d\n",c );
	return 0;
}