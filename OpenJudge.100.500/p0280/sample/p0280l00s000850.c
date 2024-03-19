#include<stdio.h>

#define N 100
#define MAX 2000
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2


int A[N][N];
int n;

int pri();

int main(){
  
  int i, j, s;
  
  scanf("%d", &n);
  
  for(i=0;i<n; i++){
    for(j=0;j<n;j++){
      scanf("%d", &s);
      A[i][j]=(s==-1) ? INFTY : s;
    }
  }

  printf("%d\n", pri());

  return 0;
}

int pri(){
  int i,x,y,min;
  int sum = 0;
  int d[N], p[N], color[N];

  for(i=0;i<n;i++){
    d[i]=INFTY;
    p[i]=-1;
    color[i]=WHITE;
  }
  d[0]=0;

  while(1){
    min=INFTY;
    x=-1;
    for(i=0;i<n;i++){
      if(min>d[i]&&color[i]!=BLACK){
        x=i;
        min=d[i];
      }
    }
    if(x==-1) {
      break;
    }
    color[x] = BLACK;
    for(y=0;y<n;y++){
      if(color[y]!=BLACK&&A[x][y]!=INFTY){
        if(d[y]>A[x][y]){
          d[y]=A[x][y];
          p[y]=x;
          color[y]=GRAY;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1){
      sum += A[i][p[i]];
    }
  }

  return sum;
}

