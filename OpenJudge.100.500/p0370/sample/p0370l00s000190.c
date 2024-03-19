#include <stdio.h>

int main(void){
  int a,c;
  char b;

  while(1){
  scanf("%d",&a);
  scanf("%s",&b);
  scanf("%d",&c);
    if(b == '?'){
      break;
    }
    else{
      switch(b){
      case '+' :
      printf("%d\n",a + c);
      break;
    
      case '-' :
      printf("%d\n",a - c);
      break;

      case '*' :
      printf("%d\n",a * c);
      break;

      case '/' :
      printf("%d\n",a / c);
      break;
      }
    }
  }
  return 0;
}
