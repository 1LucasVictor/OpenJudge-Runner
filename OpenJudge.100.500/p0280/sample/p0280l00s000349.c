#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct edge{
	int cost;
	int u;
	int v;
}edge;


int n;
int a[MAX][MAX];
edge E[MAX];


/*qsort用*/
int cmp(const void *p,const void *q){
	return ((edge*)p)->cost - ((edge*)q)->cost;
}


int find(int u,int b[]){
	if(b[u]==u){
		return u;
	}else {
		return b[u]=find(b[u],b);
	}
}

void merge(int u,int v,int b[]){
	if(b[u] < b[v]){
		b[v]=b[u];
	}
	else {
		b[u]=b[v];
	}
	return;
}



int main(){
	int i,j;
	int num=0;
	int ans=0;
	int b[MAX];/*親の配列*/
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)b[i]=i;
	
	
	/*隣接行列の読み込み*/
	for(i=0;i<n;i++){
	
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]!=-1 && j>=i+1){
				E[num].cost=a[i][j];
				E[num].u=i;
				E[num++].v=j;
			}
		}
		
	}
	
	/*edgeのソート*/
	qsort(E,num,sizeof(edge),cmp);
	
	
	for(i=0;i<num;i++){
		if(find(E[i].u,b) != find(E[i].v,b)){
			merge(E[i].u,E[i].v,b);
			ans+=E[i].cost;
		}
	}
	
	printf("%d\n",ans);
	
	return 0;
	
}
