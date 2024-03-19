#include<stdio.h>
#include<stdlib.h>

void putQueen(int**,int*,int*,int*,int*,int*,int,int);
void print(int**);
int main(){
  int **G,*row,*col,*dpos,*dneg,*a,i,j,n,x,y;

  G = malloc(8 * sizeof(int *));
  row = malloc(8 * sizeof(int *));
  col = malloc(8 * sizeof(int *));
  dpos = malloc(15 * sizeof(int *));
  dneg = malloc(15 * sizeof(int *));
  for(i=0;i<8;i++){
    G[i] = malloc(8 * sizeof(int));
  }

  for(i=0;i<8;i++){
    row[i] = 0;
    col[i] = 0;
    for(j=0;j<8;j++){
      G[i][j] = 0;
      dpos[i+j] = 0;
      dneg[i-j+8-1] = 0;
    }
  }
  scanf("%d",&n);
  a = malloc(n * sizeof(int *));
  for(i=0;i<n;i++){
    scanf("%d %d",&x,&y);
    G[x][y] = 1;
    row[x] = -1;
    col[y] = -1;
    dpos[x+y] = -1;
    dneg[x-y+8-1] =-1;
    a[i] = x;
  }
  putQueen(G,row,col,dpos,dneg,a,n,0);

}


void putQueen(int **G,int *row,int *col,int *dpos,int *dneg,int *a,int n,int i){
  int j;
  if(i == 8){
    print(G);
    return;
  }
  for(j=0;j<n;j++){
    if(a[j] == i){
      putQueen(G,row,col,dpos,dneg,a,n,i+1);
      return;
    }
  }
  for(j=0;j<8;j++){
    if(row[i] != -1&&col[j] != -1&&dpos[i+j] != -1&&dneg[i-j+8-1] != -1){
      G[i][j] = 1;
      row[i] = -1;
      col[j] = -1;
      dpos[i+j] = -1;
      dneg[i-j+8-1] =-1;
      putQueen(G,row,col,dpos,dneg,a,n,i+1);
      G[i][j] = 0;
      row[i] = 0;
      col[j] = 0;
      dpos[i+j] = 0;
      dneg[i-j+8-1] = 0;
    }
  }
}

void print(int **G){
  int i,j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(G[i][j] == 0){
        printf(".");
      }
      else printf("Q");
    }
    printf("\n");
  }
}

