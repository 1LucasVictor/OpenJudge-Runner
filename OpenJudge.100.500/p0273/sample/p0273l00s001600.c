#include<stdio.h>
int func(int);
int F[45];
int main(){
  int x,num;
  scanf("%d",&x);
  num=func(x);
  printf("%d\n",num);
  return 0;
}
int func(int n){
  if(n==0||n==1){
    return F[n]=1;
  }
  if(F[n]==0)
    F[n]=func(n-1)+func(n-2);
  return F[n];
}
  

