#include<stdio.h>
int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  printf("%d\n",m-1?(m-2)/(n-1)+1:0);
  return 0;
}
