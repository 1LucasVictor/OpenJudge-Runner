#include<stdio.h>
int main(){
  int d,n;
  scanf("%d%d",&d,&n);
  printf("%d",(n+(n==100))*(d?d>1?10000:100:1));
}
