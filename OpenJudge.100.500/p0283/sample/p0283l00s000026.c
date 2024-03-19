#include<stdio.h>
#define num 8
 
int D[num][num]={0};
 
 
 
void printboard(){
  int i,j;
     
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      if(D[i][j]==1){
	printf("Q");
      }
      else printf(".");
    }
    printf("\n");
  }
 
}
 
 
int check(int y,int x){
  int i,j;
     
  for(i=0;i<num;i++){
    if(i!=x && D[y][i]==1){
      return 0;
    }
  }
  for(i=0;i<num;i++){
    if(i!=y && D[i][x]==1){
      return 0;
    }
  }
  i=y-1; j=x+1;
  while(i>=0 && j<num){
    if(D[i--][j++]==1){
      return 0;
    }
  }
  i=y-1; j=x-1;
  while(i>=0 && j>=0){
    if(D[i--][j--]==1){
      return 0;
    }
  }
  i=y+1; j=x-1;
  while(i<num && j>=0){
    if(D[i++][j--]==1){
      return 0;
    }
  }
  i=y+1; j=x+1;
  while(i<num && j<num){
    if(D[i++][j++]==1){
      return 0;
    }
  }
     
  return 1;
     
}
 
 
int Get_Solution(int t){
  int i;
     
  for(i=0;i<num;i++){
    if(D[t][i]==1){
      if(!Get_Solution(t+1)){
	return 0;
      }
    }
  }
     
 
  if(t==num){
    printboard();
    return 1;
  }
  else {
    for(i=0;i<num;i++){
      if(D[t][i]==0 && check(t,i)){
	D[t][i]=1;
	if(!Get_Solution(t+1)){
	  D[t][i]=0;
	}
      }
    }
  }
     
     
  return 0;
 
}
 
int main(){
  int n,i,j,x,y,t=0;
     
  scanf("%d",&n);
     
  for(i=0;i<n;i++){
    scanf("%d %d",&y,&x);
    D[y][x]=1;
  }
     
  i=Get_Solution(t);
 
  return 0;
}

