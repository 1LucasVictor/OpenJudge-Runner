#include<stdio.h>
#define N 8

int M[N+1][N+1];
int mark[N+1];

void set(int a,int b,int t,int d){
  int k;

  for(k = 1;k <= N;k++){
    if(k == b) M[a][k] = t;
    else M[a][k] += d;

    if(k == a) M[k][b] = t;
    else M[k][b] += d;
  }

  for(k = 1;(a+k) <= N && (b+k) <= N;k++) M[a+k][b+k] += d;

  for(k = 1;(a-k) > 0 && (b-k) > 0;k++) M[a-k][b-k] += d;

  for(k = 1;(a-k) > 0 && (b+k) <= N;k++) M[a-k][b+k] += d;

  for(k = 1;(a+k) <= N && (b-k) > 0;k++) M[a+k][b-k] += d;
}

int can(int i){
  int j;
  for(j = 1;j <= N;j++){
    if(M[i][j] == 8) return -1;
  }
  return 1;
}

int redo(int a){
  int i,j;
  if(mark[a] == 0){
    for(j = 1;j <= N;j++){
      if(M[a][j] == 8){
        set(a,j,0,-1);
        break;
      }
    }
    for(i = j+1;i <= N;i++){
      if(M[a][i] == 0){
        set(a,i,8,1);
        return a;
        }
    }
    if(i == N+1 && can(a) == 1) redo(a-1);
  }
  else if(mark[a] == 1) redo(a-1);
}

int main(){
  int n,i,j,k,flag = 0;

  for(i = 0;i <= N;i++){
    for(j = 0;j <= N;j++){
      M[i][j] = 0;
    }
    mark[i] = 0;
  }

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d%d",&j,&k);
    set(j+1,k+1,8,1);
    mark[j+1] = 1;
  }

  for(i = 1;i <= N;i++){
    if(can(i) == 1){
      for(j = 1;j <= N;j++){
        if(M[i][j] == 0){
          set(i,j,8,1);
        }
      }
      if(j == N+1 && can(i) == 1) i = redo(i-1);
    }
    else continue;
  }


  for(i = 1;i <= N;i++){
    for(j = 1;j <= N;j++){
      if(M[i][j] == 8)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  return 0;
}

