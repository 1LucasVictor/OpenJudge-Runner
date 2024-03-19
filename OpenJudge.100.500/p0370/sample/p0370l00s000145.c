#include <stdio.h>

int main(void){
  int a,b,num;
  char OP;

  while(1){
    scanf("%d %c %d",&a,&OP,&b);
    if(OP=='?') break;
    if(OP=='+') num=a+b;
    if(OP=='-') num=a-b;
    if(OP=='*') num=a*b;
    if(OP=='/') num=a/b;
    printf("%d\n",num);
  }

  return 0;

}