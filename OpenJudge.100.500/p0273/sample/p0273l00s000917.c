#include <stdio.h>
#define N 100
int F[N];
int n;
int i;
int f(int n){
if(n==0||n==1){
  return F[n]=1;
 }
 if(F[n]!=0){
   return F[n];
 }
 return F[n]=f(n-2)+f(n-1);
}
int main(){
  for(i=0;i<N;i++){
    F[i]=0;
  }
  scanf("%d",&n);
  printf("%d\n",f(n));
  f(n);
}

