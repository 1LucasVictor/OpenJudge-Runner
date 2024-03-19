#include<stdio.h>

int main(void){
  int a,b;
  char op;
  int flg=0;

  while(flg==0){
    scanf("%d",&a);
    scanf("%s",&op);
    scanf("%d",&b);

    switch(op){
    case '+':
      printf("%d\n",a+b);
      break;
    case '-':
      printf("%d\n",a-b);
      break;
    case '*':
      printf("%d\n",a*b);
      break;
    case '/':
      printf("%d\n",a/b);
      break;
    case '?':
      flg=1;
      break;
    default:
      break;
    }
  }

  return 0;
}