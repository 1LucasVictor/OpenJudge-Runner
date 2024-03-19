#include<stdio.h>

#define N 8
#define F -1
#define NF 1

int row[N],col[N],dpos[2 * N - 1],dneg[2 * N - 1];

int A[N][N];

void setup(){
  int i;
  for(i = 0; i < N; i++){
    row[i] = F;
    col[i] = F;
  }
  for(i = 0; i < 2 * N - 1; i++){
    dpos[i] = F;
    dneg[i] = F;
  }
  
}

void print(){
  int i,j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(A[i][j]){
        if(row[i] != j) return;
      }
    }
  }
  
  for(i = 0; i < N; i++){
     for(j = 0; j < N; j++){
       if(row[i] == j) printf("Q");
       else printf(".");
     }
     printf("\n");
  }
  

}

void recursive(int i){
  int j;
  if(i == N){
    print();
    return;
  }
  for(j = 0; j < N; j++){
    if(col[j] == NF || dpos[i + j] == NF || dneg[i - j + N - 1] == NF) continue;
    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = NF;

    recursive(i + 1);

    row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = F;
  }
  
}


int main(){
  int n,i,j,a,b;
    
  setup();
  
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      A[i][j] = 0;
    }
  }
  
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d%d",&a,&b);
    A[a][b] = 1;
  }

  recursive(0);
 
  return 0;
}

