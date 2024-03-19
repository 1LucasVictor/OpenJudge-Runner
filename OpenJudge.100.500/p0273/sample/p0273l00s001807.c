#include <stdio.h>
#define N 45
void makeFibonacci(int n);
int F[N];
int main(){
  int n;
  scanf("%d",&n);
  makeFibonacci(n);
  printf("%d\n",F[n]);

}
void makeFibonacci(int n){
  int i;
  F[0]=1;
  F[1]=1;
  for(i=2;i<=n;i++) F[i]=F[i-2]+F[i-1];
}