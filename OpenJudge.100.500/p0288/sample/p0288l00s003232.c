#include<stdio.h>
main(){
  int key,A[10],j,i,n,a;
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%d",&A[i]);
  }

  for(i=1;i<=n;i++){
    key = A[i];
    j=i-1;
     for(a=0;a<n;a++){
      printf("%d ",A[a]);
    }
      printf("\n");
    while(j>=0 && A[j]>key){
      A[j+1] = A[j];
      j--;
      A[j+1] = key;
    }
  }
  return 0; 
}