#include<stdio.h>
#define N 500

static const int INFTY = (1<<21);

int main(){
  int n,i,j,a,b,x,y,sum,minv;
  int A[N][N],d[N],p[N],v[N];

  scanf("%d",&n);
  for(i=0; i<n; i++){
    for (j=0; j<n; j++){
      A[i][j] = INFTY;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d %d",&a,&x);
    for (j=0; j<x; j++){
      scanf("%d %d",&b,&y);
      A[a][b] = y;
    }
  }

  for(i=0; i<n; i++){
    d[i] = INFTY;
    v[i] = 0;
  }

  d[0] = 0;

  while(1){
    minv = INFTY;
    a = -1;
    for(i=0; i<n; i++){
      if (minv > d[i] && !v[i]){
        a = i;
        minv = d[i];
      }
    }
    if(a == -1)
      break;

    v[a] = 1;
    for(b=0; b<n; b++){
      if(!v[b] && A[a][b] != INFTY){
        if(d[b] > d[a]+A[a][b]){
          d[b] = d[a]+A[a][b];
        }
      }
    }
  }

  for (i=0; i<n; i++){
    printf("%d %d",i,(d[i]==INFTY?-1:d[i]));
    printf("\n");
  }

  return 0;
}
