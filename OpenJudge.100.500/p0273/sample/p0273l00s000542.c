#include<stdio.h>
#define MAX 45

int F[MAX];

void fib(int n){
  int i;
   F[0]=F[1]=1;
   for(i=2;i<n+1;i++){
     F[i]=F[i-1]+F[i-2];
   }
}

int main(){
  int n;
  scanf("%d",&n);
  fib(n);
  printf("%d\n",F[n]);
  return 0;
}

