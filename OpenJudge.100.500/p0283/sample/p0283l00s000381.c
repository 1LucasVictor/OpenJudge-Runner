#include<stdio.h>
#define N 8
#define FREE -1
#define NOTFREE 1
void rec(int);
void print();

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int x[N][N];
int main(){
  int i,j;
  int k,r,c;
  /* 初期化 */
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(i=0;i<N;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      x[i][j] = 0;
    }
  }

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    x[r][c] = 1;
  }
      rec(0);
  return 0;
}

void rec(int i){
  int j;
  if(i==N){
    print();
    return;
  }
  for(j=0;j<N;j++){
    if(NOTFREE == col[j] || NOTFREE == dpos[i+j] || NOTFREE == dneg[i-j+N-1]) continue;
     row[i]=j;
     col[j]=dpos[i+j]=dneg[i-j+N-1]=NOTFREE;

    rec(i+1);

    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}
void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]!=0){
        if(row[i]!=j) return;
      }
    }
          }
          for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                  if(row[i]==j) printf("Q");
              else printf(".");
            }
            printf("\n");
          }
        }
