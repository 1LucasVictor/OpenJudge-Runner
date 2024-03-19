#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
  int n,i,j,flg;
  int *A;
  int count=0;
  
  scanf("%d",&n);
  A  = (int *)malloc(n * sizeof(int));

  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  

  
  for(i=0;i<n;i++){
    if(A[i]<2){
      flg = 1;
	}
    
  else if (A[i] == 2){
    flg=0;
  }

  else if(A[i] % 2 == 0){ 
    flg=1;
  }

  else{

    
    flg=0;
    
    for(j=3 ; j<=sqrt(A[i]) ; j+=2){
      if(A[i]%j==0){
	flg=1;
	break;
      }
      
      
    }
  }
     if(flg==0) count++;
      
  }
  printf("%d\n",count);

  return 0;
}

