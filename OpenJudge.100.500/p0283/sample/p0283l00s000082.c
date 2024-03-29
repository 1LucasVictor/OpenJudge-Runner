#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int X[N][N];

void initialize();
void print();
void succ(int);

int main(){
    int k,r,c;
    initialize();
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            X[i][j]=0;
        }
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++){
       scanf("%d%d",&r,&c);
       X[r][c]=1;
    }
    succ(0);

    return 0;
}
void initialize(){
    for(int i=0;i<N;i++){
        row[i]=FREE; col[i]=FREE; }
    for(int i=0;i<2*N-1;i++){
        dpos[i]=FREE; dneg[i]=FREE; }   
}

void print(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(X[i][j]){
                if(row[i]!=j) return;
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%c",row[i]==j?'Q':'.');
        }
        printf("\n");
    }
}

void succ(int i){
    if(i==N){
        print();
        return;
    }
   for(int j=0;j<N;j++){
       if(NOT_FREE==col[j] ||
          NOT_FREE==dpos[i+j] ||
          NOT_FREE==dneg[i-j+N-1]) continue;
          row[i]=j;col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
          succ(i+1);
          row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
   }
}

