#include <stdio.h>

int main(void)
{
char op;
int a, b, c[20000];
int i = 0;
int j = 0;

do{

scanf("%d %c %d", &a, &op, &b);


if(op == '+'){
  c[i] = a + b;
}else if(op == '-'){
  c[i] = a - b;
}else if(op == '*'){
  c[i] = a * b;
}else if(op == '/'){
  c[i] = a / b;
}


i++;

}while(op != '?');

for(j = 0; j < i-1; j++)
printf("%d\n", c[j]);

return 0;
}

