#include<stdio.h>
#define N 8

int queen[N][N],row[N],col[N],dpos[2*N-1],dneg[2*N-1];
void print();
void move(int );

int main(){
  int n,r,c;
  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&r,&c);
    queen[r][c] = 1;
  }
 
  move(0);  
   
  return 0;
}
 
void move(int i){
  int j,p,q;
   
  if(i==N)
  {
    print();
    return;
  }

  for(j=0;j<N;j++)
  {
    p = i+j;
    q = i-j+N-1;
    if(col[j]==1 || dpos[p]==1 || dneg[q]==1)
          continue;

    row[i] = j;
    col[j] = dpos[p] = dneg[q] = 1;
    move(i+1);
    row[i] = col[j] = dpos[p] = dneg[q] = 0;
  }
 
}

void print(){
  int i,j;

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      if(queen[i][j])
      {
        if(row[i] != j) return;
      }
    }
  }

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }

}
