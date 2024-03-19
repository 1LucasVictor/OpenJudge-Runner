#include<stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",b%a?b-a:a+b);
  return 0;
}
