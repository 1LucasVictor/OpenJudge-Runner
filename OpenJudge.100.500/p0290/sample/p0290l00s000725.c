#include<stdio.h>
int A(int);
int main(){
  int a,b[10000],i,j,s=0;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&b[i]);
  }
  for(i=0;i<a;i++){
    s+=A(b[i]);
  }
  printf("%d\n",s);
  return 0;
}
int A(int n){
  int i;
  if(n<2){
    return 1;
  }
  else if(n==2){
    return 1;
  }
  if(n%2==0){
    return 0;
  }
  for(i=3;i<=n/i;i+=2){
    if(n%i==0)
      return 0;
  }
  return 1;
}