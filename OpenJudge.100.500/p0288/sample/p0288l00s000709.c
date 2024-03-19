#include "stdio.h"

main(){

  int v, i, j, k, A[1000], n;

  scanf("%d",&n);

  n -= 1;

  for(i=0 ; i<=n ; i++){

    scanf("%d", &A[i]);

  }



  for(i=1 ; i<=n ; i++){

  for(k=0 ; k<=n ; k++){

    printf("%d ", A[k]);

  }

  printf("\n");


    v = A[i];
    j = i-1;

    while(j>=0 && A[j]>v){

      A[j+1] = A[j];
      j--;
    }
    
    A[j+1] = v;
    
  }

  
  for(i=0 ; i<=n ; i++){

    printf("%d", A[i]);
    printf(" ");

  }

  return 0;
}