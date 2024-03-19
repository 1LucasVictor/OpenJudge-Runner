#include<stdio.h>
#include<stdlib.h>
#define N 100
#define INF 1000000
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int a[N][N];

typedef struct node{
	int id;
	int cost;
}node;

void swap(node h[],int x,int y){
	node temp=h[x];
	h[x]=h[y];
	h[y]=temp;
	return;
}


void heapsort(node heap[],int num){

	for(int i=num-1;i>0;i--){
		if(i%2==0){
			if(heap[i].cost < heap[i/2-1].cost)swap(heap,i,i/2-1);
		}else {
			if(heap[i].cost < heap[i/2].cost)swap(heap,i,i/2);
		}
	}
	
	return;

}

int update_heap(node heap[],int num){
	int u=heap[0].id;
	swap(heap,0,num-1);
	num--;
	
	for(int i=0;i<num;i++){
		heap[i].cost=MIN(heap[i].cost,a[u][heap[i].id]);
	}
	
	return num;
}




int main(){
	int i,j,n;
	int num=0;/*heapの要素の個数*/
	int ans=0;
	node heap[N];
	
	
	scanf("%d",&n);
	
	
	/*隣接行列の読み込み*/
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==-1)a[i][j]=INF;
		}
	}
	
	/*0以外の頂点をinsert*/
	for(i=1;i<n;i++){
		heap[num].cost=a[0][i];
		heap[num++].id=i;
	}
	
	/*heapを昇順にソート*/
	heapsort(heap,num);
	
	while(num!=0){
		ans+=heap[0].cost;
		num=update_heap(heap,num);
		heapsort(heap,num);
	}
	
	printf("%d\n",ans);
	
	return 0;
	
}
