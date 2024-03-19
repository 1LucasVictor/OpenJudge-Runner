#include <stdio.h>

int main(){

  int a,b;
  char ch;

  while(1){
    scanf("%d %c %d",&a, &ch, &b);
    if ( ch == '?' ) break;
    if( ch =='+'){
      printf("%d\n",a+b);
    } if( ch =='-'){
      printf("%d\n",a-b);
    } if( ch =='*'){
      printf("%d\n",a*b);
    } if( ch =='/'){
      printf("%d\n",a/b);
    }
  }
  return 0;
}