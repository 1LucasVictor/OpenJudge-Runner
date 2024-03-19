#include<stdio.h>

#define N 8

#define F 0

#define FN 1
void Queen(int);
void Print(void);

int Q[N][N];
int drop[2*N+1];
int dn[2*N+1];
int r[N];
int c[N];

int main(){
  int i,n;
  int q_c,q_r;
  scanf("%d", &n);

  for(i = 0; i <n; i++){
    scanf("%d%d", &q_r,&q_c);
    Q[q_r][q_c] = FN;
  }
  
  Queen(0);
  return 0;
}
void Queen(int a){
  int i;
  if(a == N){
    Print();
    return;
  }
  for(i = 0;i < N; i++){
    if(c[i] == FN || drop[a+i] == FN || dn[a-i+N-1] == FN)continue;

    r[a] = i;
    c[i] =FN;
    drop[a+i] =FN;
    dn[a-i+N-1] = FN;
    Queen(a+1);
    
    c[i] =F;
    drop[a+i] = F;
    dn[a-i+N-1] = F;
  }

}

void Print(void){
  int i,j;
  for(i = 0; i< N; i++){
    for(j = 0; j < N; j++){
      if(Q[i][j] == FN){
	if(r[i] != j) return;
      }
    }
  }
   for(i = 0; i< N; i++){
    for(j = 0; j < N; j++){
      if(r[i] == j){
	printf("Q");
      }
      else{
	printf(".");
      }
    }
    printf("\n");
   }
}