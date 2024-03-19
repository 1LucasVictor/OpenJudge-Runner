
#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>

#pragma region 定義
#define i_cin(X) scanf("%d", &X)
#define i_cin2(X,Y) scanf("%d %d",&X,&Y)
#define i_cin4(X,Y,Z,W) scanf("%d %d %d %d",&X,&Y,&Z,&W)
#define i_cin3(X,Y,Z) scanf("%d %d %d",&X,&Y,&Z)
#define l_cin(X) scanf("%ld",&X)
#define f_cin(X) scanf("%f",&X)
#define l_cin2(X,Y) scanf("%ld %ld",&X,&Y)
#define s_cin(X) scanf("%s",&X)
#define c_cin(X) scanf("%c",&X);
#define ll_cin(X) scanf("%lld", &X)
#define ull_cin(X) scanf("%llu", &X)
#define lf_cin(X) scanf("%lf", &X)

#define  i_cout(X) printf("%d\n",X)
#define  f_cout(X) printf("%g\n",X)
#define  i_cout2(X,Y) printf("%d %d\n",X,Y)
#define  l_cout(X) printf("%ld\n",X)
#define  s_cout(X) printf("%s\n",X)

#define  c_cout(X) printf("%c",X)


#define  ll_cout(X) printf("%lld\n",X)
#define  ull_cout(X) printf("%llu\n",X)



typedef long long  ll;
typedef unsigned long long  ull;

#define rept(x, s, n) for (int x = s; x < n; x++)

#define S_RTN(S)  s_cout(S);return 0


#define _itoa(A,N) sprintf(A, "%d", N);

int i_cins(int n, int* A);
int l_cins2(int n, long* A, long* B);
int s_dsort(const void* a, const void* b);
int s_asort(const void* a, const void* b);

int  _gcd(int a, int b);
int  _swp(int* a, int* b);
int _cknum(char* a, int n);
int _atoi(char* s, int len);


int s_asorts(const void* a, const void* b);

//昇順
int s_asorts(const void* a, const void* b) {
	return(strcmp((char*)a, (char*)b));
}
int s_dsort(const void* a, const void* b) {
	return(*(int*)b - *(int*)a);
}
int s_asort(const void* a, const void* b) {
	return(*(int*)a - *(int*)b);
}
int l_cins2(int n, long* a, long* b) {
	int i;
	rept(i, 0, n) {
		l_cin2(*(a + i), *(b + i));
	}
	return 0;
}
int i_cins(int n, int* a) {
	int i;
	for (i = 0; i < n; i++) {
		i_cin(*(a + i));
	}

	return 0;
}
int _gcd(int a, int b) {
	int r, tmp;
	if (a < b) { tmp = a; a = b; b = tmp; }
	r = a % b;
	while (r) {
		if (!r) break;
		a = b; b = r;
		r = a % b;
	}
	return(b);
}

long _max(long a, long b) {
	return a > b ? a : b;
}
long _min(long a, long b) {
	return a < b ? a : b;
}
int _swp(int* a, int* b)
{
	int tmp;
	tmp = *b; *b = *a; *a = tmp;
	return 0;
}

int _cknum(char* a, int n) {
	int i;
	char t = '0';

	for (i = 0; i < n; i++) {
		if (a[i] < '0' || a[i]>'9') return 1;
	}
	return 0;
}


int _atoi(char* s, int len) {
	char tmp[20];
	memcpy(tmp, s, len);
	tmp[len] = 0x00;
	return (atoi(tmp));
}

#pragma endregion

//167-A


int main(void) {
	char s[12],t[12];
	int ls, lt;
	s_cin(s);
	s_cin(t);
	
	ls = strlen(s); lt = strlen(t);
	if (lt != ls + 1) { S_RTN("No"); }
	
	if (memcmp(s, t, ls)) { S_RTN("No"); }
	S_RTN("Yes");





}



//#define _N 1000000000

//int main(void)
//{
//
//	int  n,i;
//	ull   tmp=1;
//
//	i_cin(n);
//
//	for (i = 1; i <= n; i++) {
//		if (!(tmp % ((ull)_N + 7)))
//			tmp = 1;
//		tmp *= (ull)i;
//	}
//	tmp %= ((ull)_N + 7);
//		
//	ull_cout(tmp);
//	return 0;
//}

