#include<stdio.h>
#define N 500

static const int INFTY = (1<<21);

int main(){
  int n,i,j,a,b,e,sum,minv;
  int A[N][N],d[N],p[N],v[N];

  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      scanf("%d", &e);
      A[i][j] = (e==-1)?INFTY:e;
    }
  }

  for(i=0; i<n; i++){
    d[i] = INFTY;
    p[i] = -1;
    v[i] = 0;
  }

  d[0] = 0;

  while(1){
    minv = INFTY;
    a = -1;
    for(i=0; i<n; i++){
      if(minv>d[i] && !v[i]){
        a = i;
        minv = d[i];
      }
    }
    if(a == -1)
      break;

    v[a] = 1;
    for(b=0; b<n; b++){
      if(!v[b] && A[a][b] != INFTY ){
        if(d[b] > A[a][b]){
          d[b] =  A[a][b];
          p[b] = a;
        }
      }
    }
  }

  sum = 0;

  for(i=0; i<n; i++){
    if(p[i] != -1){
      sum += A[i][p[i]];
    }
  }

  printf("%d\n",sum);

  return 0;
}
