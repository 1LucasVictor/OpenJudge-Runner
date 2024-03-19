#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N], col[N],dpos[2 * N -1],dneg[2 * N -1];
int Aray[N][N];

void printBoard(){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(Aray[i][j] == NOT_FREE){
                if(row[i] != j) return;
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(row[i]==j){ printf("Q");
     }else printf(".");
    }
     printf("\n");
    }
}

void recursive(int i){
    int j;
    if(i==N){ //You can put the Queen
        printBoard();
        return;
    }
    for(j=0;j<N;j++){
        if(NOT_FREE == col[j] || NOT_FREE == dpos[i+j] || NOT_FREE == dneg[i-j + N -1]){
            continue;
        }
        row[i] = j;

        col[j] = NOT_FREE;
        dpos[i+j] = NOT_FREE;
        dneg[i-j + N -1] = NOT_FREE;

        recursive(i+1);
        row[i] = FREE;
        col[j] = FREE;
        dpos[i+j] = FREE;
        dneg[i-j + N -1] = FREE;
    }
}

int main(){
  int i,n,a1,a2;

    for(i=0;i<N;i++){
        row[i] = FREE;
        col[i] = FREE;
    }

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d %d",&a1,&a2);
    Aray[a1][a2]=1;
  }
 
  recursive(0);
 
  return 0;
}
