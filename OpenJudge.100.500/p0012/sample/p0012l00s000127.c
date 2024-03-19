
#include <stdio.h>

int stack[100000];
int pop[100000];

int main(void)
{
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