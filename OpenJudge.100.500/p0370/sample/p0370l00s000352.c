#include <stdio.h>

int main(){
while(1){

 int a, b, i;
 char op;

 scanf("%d %c %d", &a, &op, &b);

 switch( op ){

 case '+' : 
 printf("%d\n", a + b);
 break;
 case '-' : 
 printf("%d\n", a - b);
 break;
 case '*' : 
 printf("%d\n", a * b);
 break;
 case '/' : 
 printf("%d\n", a / b);
 break;
 case '?' : 
 return 0;
 break;

 }
}
 return 0;
}