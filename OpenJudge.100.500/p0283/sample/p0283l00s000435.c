#include<stdio.h>
#include<stdbool.h>
 
#define N 8
#define WHITE -1
#define BLACK 1
#define MAX 100000
 
int r[N], cl[N], dpos[2*N-1] , dneg[2*N-1];
bool X[N][N];

void Ansplot() {
  int i,j;
  for(i = 0;i<N;i++) {
    for(j = 0;j<N;j++) {
      if(X[i][j]) {
        if(r[i] != j) return;
      }
    }
  }
  
  for(i = 0;i<N;i++) {
    for(j = 0;j<N;j++) printf("%s", (r[i] == j) ? "Q":"." );
    printf("\n");
  }
}
 
void recursive(int i) {
  if(i == N) {
    Ansplot
();
    return;
}
 
int j;
for(j=0;j<N;j++) {
  if(BLACK == cl[j] ||
     BLACK == dpos[i+j] ||
     BLACK  == dneg[i-j+N-1]) continue;
 
     r[i] = j; cl[j] = dpos[i+j] = dneg[i-j+N-1] = BLACK;
 
     recursive(i+1);
     r[i] = cl[j]=dpos[i+j] = dneg[i-j+N-1] = WHITE;
 
}
}

void aaaaa(int a){
  int i, count=0;
  for(i=0; i<a; i++)count++;
}
 
int main() {

  int i,j,k, a=10;
  for(i = 0;i<N;i++) r[i] = WHITE, cl[i] = WHITE;
  for(i=0;i<2*N-1;i++) dpos[i] = WHITE; dneg[i] = WHITE;
  
  for(i = 0;i<N;i++){
    for(j=0;j<N;j++) X[i][j] = false;
  }
  
  scanf("%d\n", &k);

  for(i = 0;i<N;i++) {
    int r,c; scanf("%d%d\n", &r,&c );
    X[r][c] = true;
  }
 
  recursive(0);
  aaaaa(a);
  return 0;
}

