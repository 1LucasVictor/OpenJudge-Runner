#include <stdio.h>
#include <string.h>
#define N 100000

int main(void){
  int a, b, q[N], i=0, j;
  char x;
  char *p = &x; //ポインタ変数の初期化忘れずに！！！

  do{
    scanf("%d %c %d", &a, p, &b);
    if(strcmp(p, "?")==0)
      break;

    if(strcmp(p, "+")==0)
      q[i] = a + b;
    if(strcmp(p, "-")==0)
      q[i] = a - b;
    if(strcmp(p, "*")==0)
      q[i] = a * b;
    if(strcmp(p, "/")==0){
      if(b == 0)  break;
      else   q[i] = a / b;
    }
    i++;
  }while(1);

  for(j=0; j<i; j++)
    printf("%d\n", q[j]);

  return 0;
}

