#include<stdio.h>

int main(void)
{
  int a[1000], b[1000], ans[1000] = {0}, i, cnt = 0;
  char op[1000];


  for(i = 0; i < 1000; i++) {
    scanf("%d %c %d", &a[i], &op[i], &b[i]);
    if(op[i] == '?') {
      break;
    }
    switch(op[i]){
    case '+':
      ans[i] = a[i] + b[i];
      break;
    case '-':
      ans[i] = a[i] - b[i];
      break;
    case '*':
      ans[i] = a[i] * b[i];
      break;
    case '/':
      ans[i] = a[i] / b[i];
      break;
    }
    cnt++;
  }

  for(i = 0; i < cnt; i++) {
    printf("%d\n", ans[i]);
  }

  return 0;
}