#include <stdio.h>

#define N 8
#define SAFE -1
#define OUT 1

int a[N][N];

int gyou[N],retsu[N],dp[2*N-1],deng[2*N-1];

void initialize(){
  int i;

  for(i=0;i<N;i++) {gyou[i] = SAFE; retsu[i] = SAFE;}
  for(i=0;i<2*N-1;i++) {dp[i] = SAFE; deng[i] = SAFE;}
}

void print(){
  int   i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(a[i][j]){
	if(retsu[i]!=j) return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(retsu[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;

  if(i==N){
    print();
    return;
  }

  for(j=0;j<N;j++){
    if( OUT==gyou[j] || OUT==dp[i+j] || OUT==deng[i-j+N-1]) continue;

    retsu[i] = j;gyou[j]=dp[i+j] = deng[i-j+N-1] = OUT;
    recursive(i+1);
    retsu[i] = gyou[j] = dp[i+j] = deng[i-j+N-1] = SAFE;
  }

}
      
  

int main(){
  int n,i,j,r,c;

  initialize();

  scanf("%d",&n);

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      a[i][j] = 0;
    }
  }

  for(i=0;i<n;i++) {
    scanf("%d%d",&r,&c);
    a[r][c] = 1;
  }

  recursive(0);
  
   return 0;
}

