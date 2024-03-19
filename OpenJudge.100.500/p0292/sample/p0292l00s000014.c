#include<stdio.h>
#include<stdlib.h>
int main(){
  int *A,i,N,v,j,flag=1,count=0;
  scanf("%d\n",&N);
  A=(int *)malloc(N*sizeof(int));
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }


 while(flag){
   flag=0;
   for(j=N-1;j>=1;j--){
     if(A[j]<A[j-1]){
       count++;
       v=A[j];
       A[j]=A[j-1];
       A[j-1]=v;
       flag=1;
     }
   }
 }

 for(i=0;i<N;i++){
      printf("%d ",A[i]);
 }
 printf("\n%d\n",count);
 
  return 0;
}

