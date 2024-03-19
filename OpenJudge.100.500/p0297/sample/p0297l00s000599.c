#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
  int n,q,check=0,time=0;
  int *A;
  char **c;
  int i,j;
  
  scanf("%d %d",&n,&q);
  A=malloc(n*sizeof(int));
  c=malloc(n*sizeof(char *));
  for(i=0;i<n;i++) c[i]=malloc(100*sizeof(char));
  
  for(i=0;i<n;i++) scanf("%s%*[^1-9]%d",c[i],&A[i]);
  
  i=0;
  while(1){
    if(A[i]==0);
    else if(A[i] <= q){
      time+=A[i];
      A[i]=0;
      printf("%s %d\n",c[i],time);
      check+=1;
      if(check==n) break;
    }
    else{
      A[i]-=q;
      time+=q;
    }
    i=(i+1)%n;
  }
  return 0;
}
    
  
  
