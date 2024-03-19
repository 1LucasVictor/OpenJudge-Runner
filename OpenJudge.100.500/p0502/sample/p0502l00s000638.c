#include <stdio.h>
 
int main(void)
{
  int N;
  scanf("%d",&N);
  int A[N],judgea=0,judgeb=0;
  
  for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
    if(A[i]%2==0){   
      judgea+=1;
      if(A[i]%3==0||A[i]%5==0)
        judgeb+=1;
        
    }
  }
  if(judgea==judgeb)
    printf("APPROVED");
  else
    printf("DENIED");
 
  return 0;
}