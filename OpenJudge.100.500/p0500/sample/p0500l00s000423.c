#include <stdio.h>
#define rep(i,l,n) for(int i=l;i<n;i++)

int main(){
	int a[3];
	int N,M,s,c;
	scanf("%d %d",&N,&M);
	rep(i,0,3) a[i]=-1;
	rep(i,0,M){
		scanf("%d %d",&s,&c);
		if( a[s-1]!=-1 && a[s-1]!=c ){
			printf("-1");	return 0;
		}else if( s>N ){
			printf("-1");	return 0;
		}
		a[s-1]=c;
	}
	if(a[0]==0){ printf("-1"); return 0; }
	if(a[0]==-1) a[0]=1;
	rep(i,1,N) if(a[i]==-1) a[i]=0;
	rep(i,0,N) printf("%d",a[i]);
	return 0;
}
