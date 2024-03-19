#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define bit(n,m)(((n)>>(m))&1)
int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
int downll(const void*a, const void*b){return*(ll*)a<*(ll*)b?1:*(ll*)a>*(ll*)b?-1:0;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),upll);}
void sortdown(ll*a,int n){qsort(a,n,sizeof(ll),downll);}
ll pom(ll a,ll n,int m){ll x=1;for(a%=m;n;n/=2)n&1?x=x*a%m:0,a=a*a%m;return x;}
//#define MOD 998244353
#define MOD 1000000007
#define invp(a,p)pom(a,p-2,p)

ll n,a,b,c,d;
char s[200010];
int main(){
	scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
	a--,b--,c--,d--;
	scanf("%s",s);
	ll flag=1;
	if(c>d){
		//入れ替わる
		//現在から移動できる範囲内に空きが3連続必要
		flag=0;
		rep(i,b,d+1)if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.')flag=1;
	}
	//それぞれの移動経路に#が連続する箇所だあったらダメ
	rep(i,a,c)if(s[i]=='#'&&s[i+1]=='#')flag=0;
	rep(i,b,d)if(s[i]=='#'&&s[i+1]=='#')flag=0;
	puts(flag?"Yes":"No");
}