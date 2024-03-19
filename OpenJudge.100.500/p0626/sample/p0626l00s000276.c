#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
typedef long long int ll;
#define mod 1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define m0(x) memset(x,0,sizeof(x))


//組み合わせ（nとrが少ないとき）
int combination_low(ll n,ll r){
	const ll N = 500;
	ll C[N][N];
	memset(C, 0, sizeof(C));
	C[0][0]=1;
	for(ll n=1; n<N; n++){
		C[n][0]=C[n-1][0];
		for(ll r=1; r<N; r++){
			C[n][r] = C[n-1][r-1] + C[n-1][r];
		}
	}
	return C[n][r];
}

//二分累乗法
int powa(ll a, ll n){
	ll res = 1;
	while(n>0) {
		if(n&1) res = res * a % mod;
		a = a * a % mod;
		n >>= 1; 
	}
	return res;
}

//逆元
int inverse(ll a){
	ll n = mod-2;
	return powa(a, n);
}

/*組み合わせ（いちばんうまくいったやつ）*/
int combination(ll n,ll r){
	ll x=1,y=1;
	for(int i=1;i<=r;i++){
		x = x * (n-i+1) % mod;
		y = y * i % mod;
	}
	return x * inverse(y) % mod;
}

int main(void){
	int d,n;
	scanf("%d %d",&d,&n);
	int ans=1*powa(100,d)*n;
	printf("%d\n",ans );
	return 0;

}