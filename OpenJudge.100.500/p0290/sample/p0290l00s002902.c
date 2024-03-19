#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int judge(int);

int main(){
  int i,j;
  int n;
  int *A;
  int num=0;

  scanf("%d",&n);
  
  A =(int *)malloc(n*sizeof(int ));
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<n;i++){
    if(judge(A[i]))num++;
  }
  printf("%d\n",num);
  return 0;
}

int judge(int x){
  int i;
  if(x==2)return 1;
  if(x<2||x%2==0)return 0;
  i=3;
  while(i<=sqrt(x)){
      if(x%i==0) return 0;
      i=i+2;
  }
  return 1;
}

