#include<stdio.h>

#define free -1
#define notfree 1
#define FALSE 2
#define TRUE 3

int row[8],col[8],dpos[2*8-1],dneg[2*8-1];
int X[8][8];

void in(void);
void pri(void);
void rec(int);

int main(){
  int i,j,k,r,c;

  in();

  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      X[i][j] = FALSE;

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    X[r][c] = TRUE;
  }

  rec(0);

  return 0;
}

void in(){
  int i;

  for(i=0;i<8;i++){
    row[i] = free;
    col[i] = free;
  }

  for(i=0;i<2*8-1;i++){
    dpos[i] = free;
    dneg[i] = free;
  }
}

void pri(){
  int i,j;

  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      if(X[i][j] == TRUE){
	if(row[i] != j)return;
      }

  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(row[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void rec(int i){
  int j;

  if(i == 8){
    pri();
    return;
  }

  for(j=0;j<8;j++){
    if(notfree == col[j] || notfree == dpos[i+j] || notfree == dneg[i-j+8-1])continue;
    row[i] =j;
    col[j] = dpos[i+j] = dneg[i-j+8-1] = notfree;
    rec(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+8-1] = free;
  }
}

