#include<stdio.h>

#define M 100
#define W 0
#define G 1
#define B 2
#define I 2097152


int main(){
	int d[M],color[M],MIMI[M][M];
	int n,i,j,e;
	int min,u,v,sum;
	int k,c,s,t;

	//nyu
	scanf("%d",&n);

	//nyu
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			MIMI[i][j]=I;
		}
	}

	for(i=0;i<n;i++){
		scanf("%d %d",&s,&k);
		for(j=0;j<k;j++){
			scanf("%d %d",&t,&c);
			MIMI[s][t]=c;
		}
	}




		//kansu
	for(i=0;i<n;i++){
		color[i]=W;
		d[i]=I;
	}
	d[0]=0;

	while(1){
		min=I;
		u=-1;

		for(i=0;i<n;i++){
			if(min>d[i]&&color[i]!=B){
				u=i;
				min=d[i];
			}
		}

		if(u==-1)
			break;

		color[u]=B;

		for(v=0;v<n;v++){
			if(color[v]!=B&&MIMI[u][v]!=I){
				if(d[v]>d[u]+MIMI[u][v]){
					d[v]=d[u]+MIMI[u][v];
					color[v]=G;
				}
			}
		}
	}

	for(i=0;i<n;i++){
		printf("%d %d\n",i,d[i]==I?-1:d[i]);
	}

	return 0;
}


