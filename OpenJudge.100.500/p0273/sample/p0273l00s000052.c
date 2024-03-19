#include <stdio.h>
int num;
int  makeFibonacci(){
  int F[num+1],i;
  F[0]=1;
  F[1]=1;
  for(i=2;i<=num;i++){
    F[i]= F[i-2]+F[i-1];
  }
  return F[i-1];
}
int main(){
  scanf("%d",&num);
   
  printf("%d\n",makeFibonacci());
   
  return 0;
}