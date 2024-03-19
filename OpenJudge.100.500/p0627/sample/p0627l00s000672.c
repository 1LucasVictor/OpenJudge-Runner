#include<stdio.h>

int main(void){
  int a,b;
  int add,sub,mul;
  
  scanf("%d %d",&a,&b);
  
  add = a + b;
  sub = a - b;
  mul = a * b;
  
  if( add < mul && sub < mul ) printf("%d\n",mul);
  else if( add < sub && mul < sub ) printf("%d\n",sub);
  else printf("%d\n",add);
  
  return 0;
}