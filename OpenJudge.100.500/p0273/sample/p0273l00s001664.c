#include <stdio.h>
void fibonacci(int);
int F[45];
int main(){
  int n;
  scanf("%d",&n);
  fibonacci(n);
  printf("%d\n",F[n]);
  return 0;
}
void fibonacci(int n){
  int i;  
  F[0]=1;
  F[1]=1;
  for(i=2;i<=n;i++){
    F[i]=F[i-2]+F[i-1];
  }
}