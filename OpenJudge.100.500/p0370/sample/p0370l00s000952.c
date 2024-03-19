#include<stdio.h>
int main(){
  char op;
  int a,b,c,d,e;
  while(1){
  scanf("%d %c %d",&a,&op,&b);
  if(op == '+')c=a+b;
  else if(op == '-')c=a-b;
  else if(op == '/')c=a/b;
  else if(op == '*')c=a*b;
  else if(op == '?')break;
  printf("%d\n",c );}

  return 0;
}