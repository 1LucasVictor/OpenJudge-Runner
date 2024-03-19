#include <stdio.h>

int n,A[100][100];

int main(){
  int i,j,k,c,u,v,mv,d[100],cnt[100],U,V;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=(1<<21);
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&U,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&V,&c);
      A[U][V]=c;
    }
  }

  for(i=0;i<n;i++){
    d[i]=(1<<21);
    cnt[i]=0;
  }

  d[0]=0;
  cnt[0]=1;
  while(1){
    mv=(1<<21);
    u=-1;
    for(i=0;i<n;i++){
      if(mv>d[i]&&cnt[i]!=2){
	u=i;
	mv=d[i];
      }
    }
    if(u==-1){
      break;
    }
    cnt[u]=2;
    for(v=0;v<n;v++){
      if(cnt[v]!=2&&A[u][v]!=(1<<21)){
	if(d[v]>d[u]+A[u][v]){
	  d[v]=d[u]+A[u][v];
	  cnt[v]=1;
	}
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]==(1<<21)?-1:d[i]);
  }

  return 0;
}
