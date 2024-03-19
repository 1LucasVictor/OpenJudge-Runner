#include<stdio.h>
#include<string.h>
#include<math.h>
#define loop(i, l, r) for(i=l; i<r; i++)/*Instead of function, (for).*/
#define rep(i,r) for(i=0; i<r; i++)
#define Min(a, b) ((a < b)? a : b)
#define Max(a, b) ((a > b)? a : b)
#define Abs(x) ((x>=0)? x : -x)/*Return the absolute value of x.*/
typedef long long int lli;
/*Return Combination ,(nCr)*/
int combi(int n, int r)
{
	if(r==0 || r==n) return 1;
	else return combi(n-1,r) + combi(n-1,r-1);
}
/*Return gcd(a, b)*/
int gcd(int a, int b){
	if(b == 0) return a;
	else return gcd(b, a % b);
}
int main(void)
{
	lli a, b, k;
	scanf("%lld%lld", &a, &b);
	if((a+b)%2 != 0){
		puts("IMPOSSIBLE");
		return 0;
	}
	k = (a+b)/2;
	printf("%lld", k);
	return 0;
}