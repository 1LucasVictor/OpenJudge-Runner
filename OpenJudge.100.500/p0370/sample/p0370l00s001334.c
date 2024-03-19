#include<stdio.h>
int main(){
  int a,b;
  char op;
  do{
    scanf("%d %c %d",&a,&op,&b);
    if(op != '+' && op != '-' && op != '*' && op != '/' )
      break;
    if(op == '+'){
      printf("%d\n",a+b);
    }else if(op == '-'){
      printf("%d\n",a-b);
    }else if(op == '*'){
      printf("%d\n",a*b);
    }else if(op == '/'){
      printf("%d\n",a/b);
    }
  }while(0 <= a,b <= 20000);
  return 0;
}