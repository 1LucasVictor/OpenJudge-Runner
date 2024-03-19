#include<stdio.h>
int main(){
  int a, b, c;
  scanf("%d%d",&a,&b);
  if(a%b) c = (a/b) + 1;
  else c = a/b;
  printf("%d\n",c);
  return 0;
}