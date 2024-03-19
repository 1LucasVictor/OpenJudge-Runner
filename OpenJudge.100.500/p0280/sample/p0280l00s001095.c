#include <stdio.h>

int main(){
  
  int i,j,n,min,minj,total=0,A[100][100],flag[100],t[100];

  scanf("%d",&n);
  
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }
  for(i=0;i<n;i++){
    flag[i]=0;
    t[i]=2000;
  }
  t[0]=0; 

  for(i=0;i<n-1;i++){
    min=2000;
    for(j=0;j<n;j++){
      if(t[j]<min&&flag[j]==0){
	min=t[j];
	minj=j;
      }
    }
    flag[minj]=1;
  
    for(j=0;j<n;j++){
      if(A[minj][j]!=-1&&A[minj][j]<t[j]&&flag[j]==0){
	t[j]=A[minj][j];
      }
    }
  }
  
  for(i=0;i<n;i++){
    total+=t[i];
  }
  printf("%d\n",total);
  return 0;
}