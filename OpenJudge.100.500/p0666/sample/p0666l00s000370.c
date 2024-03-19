#include<stdio.h>
int main(){
  int x,a,b;
  scanf("%d%d%d",&x,&a,&b);
  printf(a<b?(a+x<b?"dangerous":"safe"):"delicious");
}
