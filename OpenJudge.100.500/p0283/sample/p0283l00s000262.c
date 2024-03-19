#include <stdio.h>
#include <stdbool.h>


#define Niii 8
#define freeqqq -1
#define not_freewww 1

void inter(void);
void board(void);
void recursive(int );

int row[Niii],col[Niii],dpos[2*Niii-1],dneg[2*Niii-1];

bool X[Niii][Niii];



int main()
{
  inter();

  for(int i=0;i<Niii;i++){
    for(int j=0;j<Niii;j++){
      X[i][j]=false;

    }
  }

  int k;
  scanf("%d",&k);
  for(int i=0;i<k;i++){
    int r,c;
    scanf("%d%d",&r,&c);
    X[r][c]=true;
  }

  recursive(0);
  return 0;
}



void inter(){
  int i;
  for(i=0;i<Niii;i++){
    row[i]=freeqqq;
    col[i]=freeqqq;
  }
  for(i=0;i<2*Niii-1;i++){
    dpos[i]=freeqqq;
    dneg[i]=freeqqq;
  }
}


void board(){
  int i,j;
  for(i=0;i<Niii;i++){
    for(j=0;j<Niii;j++){
      if(X[i][j]){
	if(row[i]!=j)return;
      }
    }
  }
  for(i=0;i<Niii;i++){
    for(j=0;j<Niii;j++){
      if(row[i]==j){
	printf("Q");
      }
      else{
	printf(".");
      }
    }
    printf("\n");
  }
}


void recursive(int i){
  if(i==Niii){
    board();return;
  }
  for(int j=0;j<Niii;j++){
    if(not_freewww==col[j] || not_freewww==dpos[i+j] || not_freewww==dneg[i-j+Niii-1])continue;
    row[i]=j;
    col[j]=not_freewww;
    dpos[i+j]=not_freewww;
    dneg[i-j+Niii-1]=not_freewww;
    recursive(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+Niii-1]=freeqqq;
  }
}

