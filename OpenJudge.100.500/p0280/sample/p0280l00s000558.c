#include<stdio.h>
#define MAX 100
#define INFTY 1000000000
#define WHITE 0
#define BLACK 1
int M[MAX][MAX];
int color[MAX];
int d[MAX];
int n,cnt;

void trace(int A[],int n){
    int i;
    for(i=0;i<n;i++){
	printf("%d: %d\n",i,A[i]);
    }
    printf("\n");
}

int prim(){
    int sum,cnt,minv;
    int u;
    int i,j;

    sum=cnt=0;

    d[0]=0;
    color[0]=BLACK;
    cnt++;

    u=0;
    while(cnt<n){
	for(i=0;i<n;i++){
	    if(M[u][i]<d[i]) d[i]=M[u][i];
	}

//	printf("%d\n",u);
//	trace(d,n);
	
	minv=INFTY;

	for(i=0;i<n;i++){
	    if(d[i]<minv && color[i]!=BLACK){
		u=i;
		minv=d[i];
	    }
	}
	
	sum+=minv;
	color[u]=BLACK;
	cnt++;
    }
    return sum;
}

int main(void){
    int i,j;
    int t,ans=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	    scanf("%d",&t);
	    M[i][j]=( (t==-1) ? (INFTY):(t) );
	}
    }

    for(i=0;i<n;i++){
	color[i]=WHITE;
	d[i]=INFTY;
    }

    ans=prim();
    printf("%d\n",ans);

    return 0;
}