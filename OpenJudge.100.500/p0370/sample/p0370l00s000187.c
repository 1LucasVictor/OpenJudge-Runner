#include <stdio.h>
 
int main(){
  int a,b,sum;
  char op;
 
  while(1){
    if(op=='?') break;
    scanf("%d %c %d",&a,&op,&b);
 
    if(op=='+') sum = a+b;
    else if(op=='-') sum = a-b;
    else if(op=='*') sum = a*b;
    else if(op=='/') sum = a/b;
    else return 0;
    printf("%d\n",sum);
  }
  return 0;
}