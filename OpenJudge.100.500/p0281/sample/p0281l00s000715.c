#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define INF ((1LL<<62)-(1LL<<31))

//遅い方のダイクストラ（早い方の完全下位互換だが一応）
//頂点数、スタート（と隣接行列）を引いて最短距離と経路を返す
//O(V^2)
ll daikusutorap[1<<11];
ll cost[1<<10][1<<10];//辺が無いところはINFにする前処理が必要
void daikusutora(ll n,ll s){
	ll*f=(ll*)malloc(n*sizeof(ll));
	rep(i,0,n){
		daikusutorap[i]=i==s?0:INF;
		f[i]=0;
	}
	rep(nnnnnn,1,n){
		ll m=INF,mv=-1;
		rep(i,0,n){
			if(!f[i]&&m>daikusutorap[i]){
				m=daikusutorap[i];
				mv=i;
			}
		}
		if(mv==-1)break;
		f[mv]=1;
		rep(i,0,n)if(cost[mv][i]&&daikusutorap[i]>daikusutorap[mv]+cost[mv][i]){
			daikusutorap[i]=daikusutorap[mv]+cost[mv][i];
			daikusutorap[n+i]=mv;
		}
	}
	free(f);
}

int main(){
	int n;
	scanf("%d",&n);
	rep(i,0,n)rep(j,0,n)cost[i][j]=INF;
	rep(i,0,n){
		int s,k;
		scanf("%d%d",&s,&k);
		while(k--){
			int j,c;
			scanf("%d%d",&j,&c);
			cost[i][j]=c;
		}
	}
	daikusutora(n,0);
	rep(i,0,n)printf("%d %d\n",i,daikusutorap[i]);
}
