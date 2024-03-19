#include <stdio.h>
#include <stdlib.h>


int main (void){
  int n=0;
  int *arr;
  int *sub;
  
  int i;
  
  if(scanf("%d",&n) == 1){
    arr = (int *)calloc(n,sizeof(int));
    sub = (int *)calloc(n,sizeof(int));
    if (arr != NULL && sub != NULL){
      for(i=1; i<n; i++){
	scanf("%d",&arr[i]);
      }
      for(i=0; i<n; i++){
	sub[arr[i]-1] += 1;
      }
      for(i=0; i<n; i++){
	printf("%d\n",sub[i]);
    }}
  }


  return 0;
  
}
