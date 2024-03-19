#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define i_cin(X) scanf("%d", &X)
#define i_cin2(X,Y) scanf("%d %d",&X,&Y)
#define i_cin3(X,Y,Z) scanf("%d %d %d",&X,&Y,&Z)
#define l_cin(X) scanf("%ld",&X)
#define l_cin2(X,Y) scanf("%ld %ld",&X,&Y)
#define s_cin(X) scanf("%s",&X)

#define  i_cout(X) printf("%d\n",X)
#define  i_cout2(X,Y) printf("%d %d\n",X,Y)
#define  l_cout(X) printf("%ld\n",X)
#define  s_cout(X) printf("%s\n",X)
#define  ll_cout(X) printf("%lld\n",X)

typedef long long int lli;
#define rept(x, s, n) for (int x = s; x < n; x++)


int i_cins(int n, int* A);
int l_cins2(int n, long* A,long* B);
int s_dsort(const void* a, const void* b);

int main(void) {
	int   A,B,C,D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	if (A < C) A = C;
	if (B > D) B = D;
	if (A > B) i_cout(0);
	else       i_cout(B-A);
	return 0;
}