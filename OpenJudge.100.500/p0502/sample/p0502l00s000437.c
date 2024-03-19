#include <stdio.h>

int main (){
  int n, i, j=0;
  scanf("%d\n", &n);
  int A[n];
  for (i=0; i<n; i++) scanf("%d\n", &A[i]);
  for(i=0; i<n; i++){
    if (A[i]%2==0){
      if (A[i]%5!=0 && A[i]%3 != 0){
           printf("DENIED\n");
           break;
      }
      else j++;
    }
    else j++;

  }
  if (j == n){
    printf("APPROVED\n");
  }
  return 0;
}