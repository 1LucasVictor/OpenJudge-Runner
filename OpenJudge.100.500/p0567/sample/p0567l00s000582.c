#include<stdio.h>
#include<string.h>
#include<math.h>
#define loop(i, l, r) for(i=l; i<r; i++)/*Instead of function, (for).*/
#define rep(i,r) for(i=0; i<r; i++)
#define Min(a, b) ((a < b)? a : b)
#define Max(a, b) ((a > b)? a : b)
#define Abs(x) ((x>=0)? x : -x)/*Return the absolute value of x.*/
typedef long long int lli;
/*  scan  */
#define sd(a) scanf("%d",&a)
#define sc(a) scanf("%c",&a), getchar()
#define sf(a) scanf("%f",&a)
#define ss(a) scanf("%s",a)
#define sld(a) scanf("%lld",&a)
/*  print  */
#define odn(a) printf("%d\n",a)
#define oldn(a) printf("%lld\n",a)
#define ocn(a) printf("%c\n",a)
#define ofn(a) printf("%f\n",a)
#define osn(a) printf("%s\n",a)
#define od(a) printf("%d ",a)
#define old(a) printf("%lld\n",a)
#define oc(a) printf("%c ",a)
#define of(a) printf("%f ",a)
#define os(a) printf("%s ",a)
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
	int a, b, c;
	sd(a); sd(b); sd(c);
	if(c-(a-b)<0){
		od(0);
		return 0;
	}
	od(c-(a-b));
	return 0;
}