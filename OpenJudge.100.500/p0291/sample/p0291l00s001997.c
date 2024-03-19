#include<stdio.h>
#include<stdlib.h>
int sa(int,int);
int main () {
  int i,n,*A,j,key=0,z;
  scanf("%d",&n);
  A = (int *)malloc(n * sizeof(int));
 
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
   }

  for(i=0;i<n;i++){
    
    for(j=0;j<i;j++){
      z=sa(A[i],A[j]);
      if(z>key) key =z;
    
    }
  }

  

  printf("%d",key);
  return 0;
}
int sa(int x,int y){
  return x-y;
}

