#include <stdio.h>

int n, a[101][101];

void SSSP(){
  int i, j, u, min, d[101], c[101];

  for(i=0; i<n; i++){
    d[i]=100000;
    c[i]=0;
  }
  d[0]=0;
  c[0]=1;
  while(1){
    min=100000;
    u=-1;
    for(i=0; i<n; i++){
      if(min>d[i] && c[i]!=2){
	u=i;
	min=d[i];
      }
    }
    if(u==-1)break;
    c[u]=2;
    for(j=0; j<n; j++){
      if(c[j]!=2 && a[u][j]!=100000){
	if(d[j]>d[u]+a[u][j]){
	  d[j]=d[u]+a[u][j];
	  c[j]=1;
	}
      }
    }
  }
  for(i=0; i<n; i++){
    printf("%d ", i);
    if(d[i]==100000)printf("-1");
    else printf("%d\n", d[i]);
  }
}

int main(){
  int i, j, u, k, c, v;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      a[i][j]=100000;
    }
  }
  for(i=0; i<n; i++){
    scanf("%d %d", &u, &k);
    for(j=0; j<k; j++){
      scanf("%d %d", &v, &c);
      a[u][v]=c;
    }
  }
  SSSP();

  return 0;
}