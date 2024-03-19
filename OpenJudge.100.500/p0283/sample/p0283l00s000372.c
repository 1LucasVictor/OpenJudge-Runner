#include<stdio.h>

#define FREE -1
#define NOT_FREE 1

int row[8],col[8],dpos[2*8-1],dneg[2*8-1];

int X[8][8];

void initialize(void);
void print(void);
void recursive(int);

int main(){
  int i,j;
  
  initialize();

  for(i=0;i<8;i++)
    for(j=0;j<8;j++) X[i][j]=0;

  int n;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    int r,c;
    scanf("%d%d",&r,&c);
    X[r][c]=1;
  }
  recursive(0);

  return 0;
}

void initialize(){
  int i;
  for(i=0;i<8;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(i=0;i<8*2-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
}

void print(){
  int i,j;

   for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(X[i][j]){
	if(row[i]!=j)return;
      }
    }
   }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      printf("%c",(row[i]==j)?'Q':'.');
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;
  if(i==8){
    print();
    return;
  }
  for(j=0;j<8;j++){
    if(NOT_FREE==col[j] || NOT_FREE==dpos[i+j] || NOT_FREE==dneg[i-j+8-1]) continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+8-1]=NOT_FREE;
    recursive(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+8-1]=FREE;
  }
}

