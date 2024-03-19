#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#define loop(i, l, r) for(i=l; i<r; i++)/*Instead of function, (for).*/
#define rep(i,r) for(i=0; i<r; i++)
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))
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
	int h, n, i, sum=0;
	scanf("%d%d", &h, &n);
	int a[n];
	rep(i,n) scanf("%d", &a[i]);
	rep(i,n){
		sum += a[i];
	}
	if(h - sum <= 0) puts("Yes");
	else puts("No");
	return 0;
}