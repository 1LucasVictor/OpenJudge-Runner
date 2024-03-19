#include<stdio.h>

long long int gcd(long long int x, long long int y){
		long long int t;

		while(y!=0){
				t = x % y;
				x = y;
				y = t;
		}
	return x;
}

int main(int argc, char *argv[]){
		long long int a,b;

		while(scanf("%lld %lld",&a,&b) != EOF){
				printf("%lld %lld\n",gcd(a,b),a*b/gcd(a,b));
		}
		return 0;
}