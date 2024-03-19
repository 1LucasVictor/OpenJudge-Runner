#include <stdio.h>

#define inf 3000

int main(){
  int i,j,n,v[102][102],d[102],s[102],min,t;

  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&v[i][j]);
    }
  }

  for(i=2;i<=n;i++){
    d[i]=inf;
    s[i]=0;
  }

  d[1]=0;
  s[1]=0;

  while(1){
    min = inf;
    for(i=1;i<=n;i++){
      if(d[i]<min && s[i] == 0){
	min = d[i];
	t=i;
      }
    }
    if(min==inf)break;
    s[t]=1;
    for(i=1;i<=n;i++){
      if(s[i]==0 && v[t][i] != -1){
	if(v[t][i]<d[i]){
	  d[i]=v[t][i];
	}
      }
    }
  }

  t=0;
  
  for(i=1;i<=n;i++){
    t+=d[i];
  }

  printf("%d\n",t);

  return 0;
}

