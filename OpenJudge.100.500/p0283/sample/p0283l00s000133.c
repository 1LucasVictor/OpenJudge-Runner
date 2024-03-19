#include<stdio.h>
#include<stdbool.h>
int row[8],col[8],dpos[15],dneg[15];
bool x[8][8];
void func1(){
  int i;
  for(i=0;i<8;i++){
    row[i]=-1;
    col[i]=-1;
  }
  for(i=0;i<15;i++){
    dpos[i]=-1;
    dneg[i]=-1;
  }
}
void print(){
  int i,j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(x[i][j]){
	if(row[i]!=j)
	  return;
      }
    }
  }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(row[i]==j)
	printf("Q");
      else
	printf(".");
    }
    printf("\n");
  }
}
void func(int i){
  int j;
  if(i==8){
    print();
    return ;
  }
  for(j=0;j<8;j++){
    if(col[j]==1||dpos[i+j]==1||dneg[i-j+7]==1)
      continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+7]=1;
    func(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+7]=-1;
  }
}
int main(){
  int i,j,k,a,b;
  func1();
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      x[i][j]=false;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&a,&b);
    x[a][b]=true;
  }
  func(0);
  return 0;
}
    
  

