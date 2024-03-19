#include <stdio.h>

int main(void)
{
  int stack[10000];
  int pop[10000];
  int i, j;
  int shead, phead;
  int n;

  shead = 0;
  phead = 0;
  while (scanf("%d", &n) != EOF){
    if (n){
      stack[shead++] = n;
    }
    else{
      pop[phead++] = stack[--shead];
      if (!shead){
	break;
      }
    }
  }
  for (i = 0; i < phead; i++){
    printf("%d\n", pop[i]);
  }

  return 0;
}