#include <stdio.h>
int A[2000][2000];//i-jの重さの値
int main (){
  int n,i,j,min=1,sum=0,count=0;
  for(i=0;i<2000;i++){
    for(j=i;j<2000;j++){
      A[i][j]=0;
    }
  }
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }    
  }
  while(1){  
    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
	if(A[i][j]==min){
	  sum=sum+A[i][j];
	  count++;
	  if(count==(n-1)) break;
	}
      }    
      if(count==(n-1)) break;
    }
    min++;
    if(count==(n-1)) break;
  }

  printf("%d\n",sum);
  
  
    return 0;
}