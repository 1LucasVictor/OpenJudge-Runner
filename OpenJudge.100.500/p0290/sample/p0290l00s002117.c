#include<stdio.h>
#define N 10000

int main(){
  
  int A[N] ,i ,j ,count ,k ,countp=0;

  scanf("%d",&k);

  for(i=0;i<k;i++)  scanf("%d",&A[i]);

  for(i=0;i<k;i++){
 
    count=0;
    
    for(j=1;j<=A[i];j++){
      if(A[i]%j==0) count++;
    }
    
    if(count == 2) countp++;
  }
  
  printf("%d\n",countp);
  
  return 0;
}
    

  

