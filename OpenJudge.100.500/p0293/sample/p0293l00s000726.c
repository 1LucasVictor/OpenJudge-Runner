#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main(){
  int j,i,n,*A,count,swap,mini;
  scanf("%d",&n);
  A=malloc(n*sizeof(int));
  for(i=0;i<n;i++) scanf("%d",&A[i]);
  for(i=0;i<n-1;i++){
    mini=i;
    for(j=i+1;j<n;j++){
      if(A[mini]>A[j]) mini=j;
    }
    if(mini!=i){
      swap=A[mini];
      A[mini]=A[i];
      A[i]=swap;
      count+=1;
    }
  }
  for(i=0;i<n-1;i++) printf("%d ",A[i]);
  printf("%d\n",A[n-1]);
  printf("%d\n",count);
  return 0;
}