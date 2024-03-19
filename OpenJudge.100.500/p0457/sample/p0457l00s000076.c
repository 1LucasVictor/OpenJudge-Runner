
#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <float.h>

#pragma region 定義
typedef long long  ll;
typedef unsigned long long  ull;


#define _itoa(A,N) sprintf(A, "%d", N);

int i_dsort(const void* a, const void* b);
int i_asort(const void* a, const void* b);

int  _gcd(int a, int b);
int  _swp(int* a, int* b);
int _cknum(char* a, int n);
int _atoi(char* s, int len);

int s_asort(const void* a, const void* b);
int s_dsort(const void* a, const void* b);

//昇順
int s_asort(const void* a, const void* b) {
	return(strcmp((char*)a, (char*)b));
}
int s_dsort(const void* a, const void* b) {
	return(strcmp((char*)b, (char*)a));
}

int i_dsort(const void* a, const void* b) {
	return(*(int*)b - *(int*)a);
}
int i_asort(const void* a, const void* b) {
	return(*(int*)a - *(int*)b);
}


int i_gcd(int a, int b);
int i_gcd(int a, int b) {
	if (!b)return a;
	return i_gcd(b, a % b);
}
int i_lcm(int a, int b);
int i_lcm(int a, int b) {
	return (a * b) / i_gcd(a, b);
}
int ll_gcd(ll a, ll b);
int ll_gcd(ll a, ll b) {
	if (!b)return a;
	return ll_gcd(b, a % b);
}
int ll_lcm(ll a, ll b);
int ll_lcm(ll a, ll b) {
	return (a * b) / ll_gcd(a, b);
}

// puts("Yes\n") puts("No\n")
// scanf("%d.%d") 浮動小数点入力を整数２つで得る


//#define pai  3.1415926535 
//#define  _USE_MATH_DEFINES でM_PIが使える

#define deg_rad(X)  (X*(M_PI/180))


int _swp(int* a, int* b)
{
	int tmp;
	tmp = *b; *b = *a; *a = tmp;
	return 0;
}
#define _abs(x) ((x)>0?(x):-(x))
#define _min(x,y) ((x)<(y)?(x):(y))
#define _max(x,y) ((x)<(y)?(y):(x))

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

//素因数分解　pf素数が入る　pc 素数の数
//ll _pfact(ll a);
//static ll pf[100000000];
//static ll pc;
//
//ll _pfact(ll a) {
//	long i, r;
//	if (a % 2 == 0) {
//		pf[pc] = 2; pc++;
//		return(_pfact(a / 2));
//	}
//	r = sqrt(a);
//	for (i = 3; i <= r; i += 2) {
//		if (a % i == 0) {
//			pf[pc] = i; pc++;
//			return(_pfact(a / i));
//		}
//	}
//	if (a != 1) {
//		pf[pc] = a; pc++;
//	}
//	return 0;
//
//}

//同じものの最初の文字をNULLにして降順
int _sort(const void* a, const void* b);
int _sort(const void* a, const void* b) {
	char rc;

	rc = strcmp((char*)b, (char*)a);
	if (rc == 0) {
		*(char*)a = 0x00;
		return(1);
	}
	return(rc);
}

#pragma endregion

// ABC 172 C-Tsundoku
static int a[200001];
static int b[200001];

int main(void) {
	int  n, m, k, i, j,sum=0;
	ll  kka = 0,kkb=0;

	scanf("%d %d %d", &n, &m, &k);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
//		if (k < kk + a[i]) continue;
		kka += a[i];
	}
//		sum++;
//	}        //aのみ読んだ時の最大数
//	n = sum; sum = 0;
	for (j = 0; j < m; j++) {
		scanf("%d", &b[j]);
//		if (kkb + b[j] > k)break;
		kkb += b[j];
//		sum++;
	}
//	m = sum;
//	if (!n) { //aが一冊も読めない場合　ｂ
//		printf("%d\n", m); return 0;
//	}         //bが一冊も読めない場合　ｂ
//	if (!m){ printf("%d\n",n); return 0;
//    }
	if (kka+kkb<=k) {
		printf("%d\n",m+n); return 0;
	}

//	printf("a n:%d m:%d kka:%lld kkb:%lld\n",n,m,kka,kkb);

	j = -1; i = n; sum = n;
	while (i>=0 && j<n) {
		if (j < m) {
			j++; kka += b[j];
		}
		if (i > 0) {
			i--; kka -= a[i];
		}
		if(kka<=k) 
		   sum = _max(j+i+1, sum);
//		printf("b:%d a:%d sum:%d\n", j, i, sum);
	}
	
   printf("%d\n", sum);
	
   return 0;
}


