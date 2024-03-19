#include <stdio.h>

int n, a[101][101], sum=0;

void MST(void){
  int i, j, u, min;
  int T[101], v[101], c[101];

  for(i=0; i<n; i++){
    T[i]=100000;
    v[i]=-1;
    c[i]=0;
  }
  T[0]=0;

  while(1){
    min=100000;
    u=-1;
    for(i=0; i<n; i++){
      if(min>T[i] && c[i]!=2){
	u=i;
	min=T[i];
      }
    }
    if(u==-1)break;
    c[u]=2;
    for(j=0; j<n; j++){
      if(c[j]!=2 && a[u][j]!=100000){
	if(T[j]>a[u][j]){
	  T[j]=a[u][j];
	  v[j]=u;
	  c[j]=1;
	}
      }
    }
  }

  for(i=0; i<n; i++){
    if(v[i]!=-1){
      sum+=a[i][v[i]];
    }
  }
}

int main(){
  int i, j, e;

  scanf("%d", &n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      scanf("%d", &e);
      if(e==-1)a[i][j]=100000;
      else a[i][j]=e;
    }
  }
  MST();
  printf("%d\n", sum);

  return 0;
}
      