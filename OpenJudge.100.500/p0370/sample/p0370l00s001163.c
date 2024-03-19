#include <stdio.h>
int main(void)
{
int a,b,i;
char op;


while(1){

scanf("%d", &a);
scanf("%s", &op);
scanf("%d", &b);

if(op == '+') {
 printf("%d\n", a+b);
}
 else if(op == '-') {
 printf("%d\n", a-b);
}
else if(op == '*') {
 printf("%d\n", a*b);
}
else if(op == '/') {
 printf("%d\n", a/b);
}
else break;
}

return 0;
}