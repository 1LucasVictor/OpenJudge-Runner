#include<stdio.h>
#define MAX 100
#define INFTY 1000000000
#define WHITE 0
#define BLACK 1
#define min(a,b) ( (a<b)? (a):(b) )
int M[MAX][MAX];
int d[MAX];
int color[MAX];
int n;

void trace(){
    int v;
    for(v=0;v<n;v++){
	printf("%d(%d): %d\n",v,color[v],d[v]);
    }
    printf("\n");
}

void dijkstra(){
    int u,v;
    int cnt=0,minv;

    u=0;
    d[u]=0;
    color[u]=BLACK;
    cnt++;

    while(cnt<n){
	for(v=0;v<n;v++){
	    if(color[v]==WHITE){
		d[v]=min(d[v],d[u]+M[u][v]);
	    }
	}
	
//	trace();

	minv=INFTY;

	for(v=0;v<n;v++){
	    if(color[v]==WHITE && d[v]<minv){
		u=v;
		minv=d[v];
	    }
	}

	color[u]=BLACK;
	cnt++;
    }
}


int main(void){
    int i,j;
    int u,k,v,c;

    scanf("%d",&n);

    for(i=0;i<n;i++) for(j=0;j<n;j++){
	M[i][j]=INFTY;
    }

    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
	    while(k--){
		scanf("%d%d",&v,&c);
		M[u][v]=c;
	    }
    }

/*
    for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	    printf("%d ",( (M[i][j]==INFTY) ? (-1):(M[i][j]) ));
	}
	printf("\n");
    }
*/	
		
    for(i=0;i<n;i++){
	d[i]=INFTY;
	color[i]=WHITE;
    }

    dijkstra();

    for(i=0;i<n;i++){
	printf("%d %d\n",i,d[i]);
    }

    return 0;
}