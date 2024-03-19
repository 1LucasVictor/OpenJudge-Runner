#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _n{
  int n;
  struct _n *next;
}List;

List *top;

char S[100000];

int Do(void){
  int i, c, N, C;
  List *p, *q, *r;
  top = malloc(sizeof(List));
  top->n = -1;
  top->next = NULL;
  scanf("%s", S);
  N = strlen(S);
  p = top;
  for(i = 0;i < N;i++){
    q = malloc(sizeof(List));  
    q->n = S[i] - '0';
    q->next = NULL;
    p->next = q;
    p = p->next;
  }
  c = 0;
  while(1){
    p = top;
    C = 0;
    while(p != NULL && p->next != NULL && p->next->next != NULL){
      if(p->next->n + p->next->next->n == 1){
	q = p;
	r = p->next->next->next;
	q->next = r;
	p = q;
	C = 1;
	c += 2;
      }
      p = p->next;
    }
    if(C == 0) break;
  }
  return c;
}

int main(void){
  printf("%d\n", Do());
  return 0;
}
