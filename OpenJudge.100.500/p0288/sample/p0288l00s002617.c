#include <stdio.h>

int main()
{
  int N,i,v,j;

  scanf("%d",&N);

  int A[N];
  
  for(i=0; i<N; i++){
    scanf("%d",&A[i]);
  }
    
    for(j=0; j<N; j++){
        printf("%d ", A[j]);
    }
    printf("\n");
    
   for (i=1; i<=N-1; i++) {
    v  =  A[i];
    j=i-1;
    while(j>=0 && A[j]>v){
       A[j+1]=A[j];
       j--;
       A[j+1]=v;
         }
       for(j=0; j<N; j++){
           printf("%d ", A[j]);
       }
       printf("\n");
      }
}
