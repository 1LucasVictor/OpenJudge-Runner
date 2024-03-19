#include <stdio.h>
void rec(int);
void print();
int gyou[8],retsu[8],leftdown[15],rightdown[15],array[8][8];
int main(){
  int i,j,num,gyo,ret;
  for(i=0;i<8;i++){
    gyou[i]=0;
    retsu[i]=0;
  }
  for(i=0;i<15;i++){
    leftdown[i]=0;
    rightdown[i]=0;
  }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      array[i][j]=0;
    }
  }
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d%d",&gyo,&ret); 
    array[gyo][ret]=1;
    
  }
  rec(0);
  
  return 0;
}

void rec(int sum){
  int i;
 
  if(sum==8){
    print();
    return;
  }
  for(i=0;i<8;i++){
    if(retsu[i]==1 || leftdown[sum+i]==1 || rightdown[sum-i+7]==1) continue;
    gyou[sum]=i;
    retsu[i]=1;
    leftdown[sum+i]=1;
    rightdown[sum-i+7]=1;
    
    rec(sum+1);
    gyou[sum]=0;
    retsu[i]=0;
    leftdown[sum+i]=0;
    rightdown[sum-i+7]=0;
  }
  
}
    
void print(){   /*output*/
  int i,j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(array[i][j]==1){
	if(gyou[i]!=j) return;
      }
    }
  }
  
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(gyou[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

