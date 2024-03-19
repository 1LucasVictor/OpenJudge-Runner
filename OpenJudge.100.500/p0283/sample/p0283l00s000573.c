#include <stdio.h>
#define N 8
#define Free -1
#define nFree 1
void recursive(int);
void printBoard();


int row[N], col[N], dpos[2*N-1], dneg[2*N-1];
int b[N][N], k;
int main(){
        int i, j, r, c;

        for(i=0; i<N; i++) {
                row[i]=Free, col[i]=Free;
        }
        for(j=0; j<2*N-1; j++) {
                dpos[j]=Free, dneg[j]=Free;
        }
        scanf("%d", &k);

        for(i=0; i<k; i++) {
                scanf("%d%d", &r, &c);
                b[r][c]=nFree;
        }

        recursive(0);

        return 0;
}

void recursive(int i){
        int j;
        if(i==N) {
                printBoard();
                return;
        }

        for(j=0; j<N; j++) {
                if(nFree==col[j]||nFree==dpos[i+j]||nFree==dneg[i-j+N-1])
                        continue;
                row[i]=j;
                col[j]=dpos[i+j]=dneg[i-j+N-1]=nFree;
                recursive(i+1);
                row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=Free;
        }
}

void printBoard(){
int i, j;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(b[i][j]==nFree){
        if(row[i]!=j)return;
      }
    }
  }
for(i=0; i<N; i++){
  for(j=0; j<N; j++){
if(row[i]==j) printf("Q");
else printf(".");
  }
  printf("\n");
}
}