#include <stdio.h>
#include <string.h>

char A[10][10];
int book[10],k,r,c,a[20],d[20],e[10];

void putQueen(int x){
  int i,j;
  
  if(e[x]==1)putQueen(x+1);
  
  if(x==8){
    for(i=0;i<8;i++){
      for(j=0;j<8;j++)printf("%c",A[i][j]);
    printf("\n");
    }
    return;
  }

  for(i=0;i<8;i++){
    if(book[i]==0 && a[x+i]==0 && d[x-i+8]==0){
      book[i]=1;
      a[x+i]=1;
      d[x-i+8]=1;
      A[x][i]='Q';
      putQueen(x+1);
      book[i]=0;
      a[x+i]=0;
      d[x-i+8]=0;
      A[x][i]='.';
    }
  }  
}

int main(){
  int i;
  
  scanf("%d",&k);
  for(i=0;i<8;i++){
    for(int j=0;j<8;j++)A[i][j] = '.';
  }
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    A[r][c] = 'Q';
    book[c] = 1;
    a[r+c]=1;
    d[r-c+8]=1;
    e[r]=1;
  }
  putQueen(0);
  return 0;
}

