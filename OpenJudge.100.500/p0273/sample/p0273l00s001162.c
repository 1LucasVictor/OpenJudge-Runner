#include<stdio.h>
#include<stdlib.h>

int fibonacci(int);

int main(){
  int n;
  int output;

  scanf("%d",&n);

  printf("%d\n",fibonacci(n+1));

  return 0;
}

int fibonacci(int n){
  int *F=(int*)malloc(n*sizeof(int));
  int output;

  F[0]=1;
  F[1]=1;

  for(int i=2;i<n;i++){
    F[i]=F[i-1]+F[i-2];
  }
  output=F[n-1];
  free(F);

  return output;
}

