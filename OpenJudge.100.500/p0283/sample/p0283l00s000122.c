#include <stdio.h>
#define N 8
#define Free -1
#define NotFree 1
#define False -2
#define True 2
int row[N];
int col[N];
int dpos[2*N-1];
int dneg[2*N-1];
int k;
int X[N][N];
void init(){
        int i;
        for(i=0; i<N; i++) {
                row[i]=Free;
                col[i]=Free;
        }
        for(i=0; i<2*N-1; i++) {
                dpos[i]=Free;
                dneg[i]=Free;
        }
}
void PrintQ(){
        int i,j;
        for(i=0; i<N; i++) {
                for(j=0; j<N; j++) {
                  if(X[i][j]==True){
                    if(row[i] != j){
                      return;
                    }
                  }
                }
        }
        for(i=0; i<N; i++) {
                for(j=0; j<N; j++) {
                        if(row[i]==j) {
                                printf("Q");
                        }
                        else{
                                printf(".");
                        }
                }
                printf("\n");
        }
}
void Rescusive(int i){
        int j;
        if(i==N) {
                PrintQ();
                return;
        }
        for(j=0; j<N; j++) {
                if(col[j]==NotFree||dpos[i+j]==NotFree||dneg[i-j+N-1]==NotFree) {
                        continue;
                }
                row[i]=j;
                col[j]=dpos[i+j]=dneg[i-j+N-1]=NotFree;
                Rescusive(i+1);
                col[j]=dpos[i+j]=dneg[i-j+N-1]=Free;

        }
}
int main(){
  init();
        int i,j,k,r,c;
        for(i=0; i<N; i++) {
                for(j=0; j<N; j++) {
                        X[i][j]=False;
                }
        }
        scanf("%d",&k);
        for(i=0; i<k; i++) {
                scanf("%d%d",&r,&c);
                X[r][c]=True;
        }
        Rescusive(0);

        return 0;
}