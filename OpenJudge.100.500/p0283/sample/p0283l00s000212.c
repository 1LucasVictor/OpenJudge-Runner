#include<stdio.h>

#define M 8
#define F -1
#define N 1

int r[M],c[M],d1[2 * M -1],d2[2 * M - 1],x[M][M];

void initial(){
  int i;
  for(i = 0;i < M;i++){
    r[i] = F;
    c[i] = F;
  }
  for(i = 0;i < 2 * M - 1;i++){
    d1[i] = F;
    d2[i] = F;   
  }
}


void print(){
  int i,j;
  for(i = 0;i < M;i++){
    for(j = 0;j < M;j++){
      if(x[i][j]){
	if(r[i] != j)return;
      }
    }
  }
 for(i = 0;i < M;i++){
    for(j = 0;j < M;j++){
      if(r[i] == j){
      printf("Q");
      }else printf(".");
    }
    printf("\n");
 }
}

void recurse(int i){
  int j;
  if(i == M){
    print();
    return;
  }

  for(j = 0;j < M;j++){
    if(N == c[j]||N == d1[i + j]||N == d2[i - j + M - 1]) continue;
    r[i] = j;
    c[j] = d1[i + j] = d2[i - j + M - 1] = N;
    recurse(i + 1);
    c[j] = d1[i + j] = d2[i - j + M - 1] = F;
  }
}

int main(){
  int i,j,k,l,m,f = 0,t = 1;

  initial();

  for(i = 0;i < M;i++){
    for(j = 0;j < M;j++){
      x[i][j] = f;
    }
  }

  scanf("%d",&k);
  for(i = 0;i < k;i++){
    scanf("%d%d",&l,&m);
    x[l][m] = t;
  }

  recurse(0);

  return 0;
}
  

