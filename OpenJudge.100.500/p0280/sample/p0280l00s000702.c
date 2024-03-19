#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)


//辺の情報を個別に持つタイプ
typedef struct edge{ll s,g,c;}E;
typedef struct graph{
	int vcnt,ecnt;
	E  e[200010];//適宜変える
	int id[100010];//適宜変える
}G;

int csort(const void*a,const void*b){
	ll p=(*(E*)a).c,q=(*(E*)b).c;
	return p<q?-1:p>q?1:0;
}

G g;
void readgraph(){
	//適宜変える
	ll n;
	ll m=0;
	scanf("%lld",&n);
	rep(i,0,n)rep(j,0,n){
		ll c;
		scanf("%lld",&c);
		if(c!=-1){
			g.e[m].s=i;
			g.e[m].g=j;
			g.e[m].c=c;
			m++;
		}
	}
	g.vcnt=n;
	g.ecnt=m;
	qsort(g.e,g.ecnt,sizeof(E),csort);
}

//union-find
#define UFLIMIT (1<<17)
int unicnt[UFLIMIT+10];//正ならcnt、非正なら根のindex
void ufinit(int n){rep(i,0,n)unicnt[i]=1;}
int root(int x){return unicnt[x]<=0?-(unicnt[x]=-root(-unicnt[x])):x;}
int same(int x,int y){return root(x)==root(y);}
void uni(int x,int y){if((x=root(x))==(y=root(y)))return;if(unicnt[x]<unicnt[y]){int t=x;x=y;y=t;}unicnt[x]+=unicnt[y];unicnt[y]=-x;}
#undef UFLIMIT

//クラスカル法
//最小全域木を構成する辺とそのコストの合計を求める
//union findが必要、事前にコストでソートが必要
//O(ElogE)
//*
//ll saishou[100010];
ll kurasukaru(G g){
	ll ans=0;
	ufinit(g.vcnt);
	rep(i,0,g.ecnt){
		if(!same(g.e[i].s,g.e[i].g)){
			uni(g.e[i].s,g.e[i].g);
//			saishou[i]=1;
			ans+=g.e[i].c;
		}
	}
	return ans;
}
//*/

int main(){
	readgraph();
	printf("%d\n",kurasukaru(g));
}
