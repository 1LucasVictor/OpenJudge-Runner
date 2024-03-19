#include<stdio.h>


#define N 8
#define E -1
#define NE 1

int R[N],C[N],dpos[2*N-1],dneg[2*N-1];

int x[N][N];
void init();
void print();
void recur(int);

int main(){
  int i,j,n,r,c;
  init();
  for(i=0;i<N;i++){
    for(j=0;j<N;j++) x[i][j] = 0; 
  }
  scanf("%d",&n);
  
    for(i=0;i<n;i++){
      scanf("%d",&r);
      scanf("%d",&c);
      x[r][c] = 1;
    }
  
    recur(0);
  

    return 0;
}

void init(){
  int i;
  for(i=0;i<N;i++){
    R[i] = E;
    C[i] = E;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=E;
    dneg[i]=E;
  }

}

void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]){
	if(R[i]!=j) return;
      }
    }

  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(R[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void recur(int i){
  int j;
  if(i==N){
    print();
    return;
  }
  for(j=0;j<N;j++){
    if(NE == C[j] || NE == dpos[i+j]||NE ==dneg[i-j +N-1]) continue;
    R[i]=j;
    C[j]=NE;
    dpos[i+j]=NE;
    dneg[i-j+N-1]=NE;

    recur(i+1);
    R[i]=E;
    C[j]=E;
    dpos[i+j]=E;
    dneg[i-j+N-1]=N;
  }
  
}

