#include<stdio.h>
int main(void) {
  char op;
  int a,b,i;

  for(i=0;;i++) {
    scanf("%d %c %d\n",&a,&op,&b);

    if(op == '?') break;
    
    switch (op) {
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
    }
    
  }

  return 0;
}
