#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

//セグ木ここから
//*
//↓ここを変える
typedef struct atai{ll a,c;}atai;
atai xx(atai x,atai y){
	atai r;
	r.a=x.a+y.a;
	r.c=x.c+y.c;
	return r;
}
atai aid={0,0};
//↑ここを変える

int segNUM;
atai *segN,*seg;
void seguse(int n){
	segN=(atai*)calloc(2*n,sizeof(atai));
	segNUM=n;
	seg=segN+segNUM;
	rep(i,1,2*segNUM)segN[i]=aid;
}
//seg[]に値を与えてから初期化
void seginit(){for(int node=segNUM-1;node;node--)segN[node]=xx(segN[node*2],segN[node*2+1]);}
void segupdate(int node,atai x){
	//seg[node]をxに更新
	node+=segNUM;
	segN[node]=x;
	while(node/=2)segN[node]=xx(segN[node*2],segN[node*2+1]);
}

atai segcalcsub(int l,int r,int k,int cl,int cr){
	if(l>=r)return aid;
	//完全に含むとき
	if(l<=cl&&cr<=r)return segN[k];

	int cm=(cl+cr)/2;
	//左側だけ
	if(r<=cm)return segcalcsub(l,r,2*k  ,cl,cm);
	//右側だけ
	if(cm<=l)return segcalcsub(l,r,2*k+1,cm,cr);
	//両方
	return xx(segcalcsub(l,r,2*k,cl,cm),segcalcsub(l,r,2*k+1,cm,cr));
}
atai segcalc(int l,int r){return segcalcsub(l,r,1,0,segNUM);}
//セグ木ここまで
//*/

int n,q;
int t[100010];
char s[100010][11];
int idx[100010];
int c(const void*x,const void*y){
	int i=*(int*)x,j=*(int*)y;
	if((t[i]-1)/q<(t[j]-1)/q)return -1;
	if((t[i]-1)/q>(t[j]-1)/q)return  1;
	if(i<j)return -1;
	return 1;
}

int main(){
	scanf("%d%d",&n,&q);
	rep(i,0,n)scanf("%s %d",s[i],t+i);
	rep(i,0,n)idx[i]=i;
	qsort(idx,n,sizeof(int),c);

	seguse(1<<17);
	rep(i,0,n){
		atai l=segcalc(0,idx[i]);
		atai r=segcalc(idx[i],1<<17);
		int cnt=(t[idx[i]]-1)/q;
									//左側					//右側						//自分
		printf("%s %d\n",s[idx[i]],(cnt+1)*q*(idx[i]-l.c)+l.a+cnt*q*(n-1-idx[i]-r.c)+r.a+t[idx[i]]);
		atai x={t[idx[i]],1};
		segupdate(idx[i],x);
	}
}


