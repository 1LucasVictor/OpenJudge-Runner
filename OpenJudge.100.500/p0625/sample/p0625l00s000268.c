#include<stdio.h>
int main(){
  int a, b;
  scanf("%d%d",&a,&b);
  printf("%s",(a<9 && b<9)?"Yay!":":(");
}