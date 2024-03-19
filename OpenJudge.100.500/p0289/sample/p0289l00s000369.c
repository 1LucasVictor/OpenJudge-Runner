#include<stdio.h>
int gcd(int x,int y){
  return y?gcd(y,x%y):x;
}
int main(){
  int i,j;
  scanf("%d %d",&i,&j);
  gcd(i,j);
  printf("%d\n",gcd(i,j));
  return 0;
}

