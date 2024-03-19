#include <stdio.h>
#define N 5

int main(){
  int i, j, c=0, n, A[N], key;

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  
  if(n != 1){
    for(i = 0; i < n; i++){
      for(j = n-1; j > i; j=j-1){
	if(A[j] < A[j-1]) {
	  key = A[j];
	  A[j] = A[j-1];
	  A[j-1] = key;
	  c++;
	}
      }
    }
    
    /*
    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
	if(A[j] > A[j+1]) {
	  key = A[j];
	  A[j] = A[j+1];
	  A[j+1] = key;
	  c++;
	}
      }
    }
    */
  }
  
  for ( i = 0; i < n; i++ ){
    if ( i > 0 ) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
  printf("%d\n",c);

  return 0;
}