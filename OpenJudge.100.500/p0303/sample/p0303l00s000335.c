#include <stdio.h>
#include <stdlib.h>

typedef struct truck{
  long p;
  struct truck *next;
}Truck;

Truck *push_front(Truck *begin) {
  Truck *p;
  p = (Truck*)malloc(sizeof(Truck));
  p->p = 0;
  p->next = begin;
  return p;
}

Truck *sort(Truck *begin) {
  Truck *p = begin,*temp;
  while(p->next != NULL) {
    if(p->next->p >= begin->p) break;
    p = p->next;
  }
  if(p == begin) return begin;
  temp = begin->next;
  begin->next = p->next;
  p->next = begin;
  return temp;
}

Truck *push_decend(Truck *begin, int m) {
  Truck *p,*p1;
  p = (Truck*)malloc(sizeof(Truck));
  p->p = m;
  p->next = NULL;
  if(begin == NULL) return p;
  if(begin->p <= p->p) {
    p->next  = begin;
    return p;
  }
  p1 = begin;
  while(p1->next != NULL) {
    if(p1->next->p <= p->p) break;
    p1 = p1->next;
  }
  p->next = p1->next;
  p1->next = p;
  
  return begin;
}

int main() {
  int m;
  long n,k,i;
  Truck *begin = NULL,*p;
  Truck *w_begin = NULL;
  scanf("%ld %ld", &n, &k);
  for(i = 0; i < k; i++) begin = push_front(begin);
  for(i = 0; i < n; i++) {
    scanf("%d", &m);
    w_begin = push_decend(w_begin,m);
  }

  p = w_begin;
  for(i = 0; i < n; i++) {
    begin->p += p->p;
    begin = sort(begin);
    p = p->next;
  }
  p = begin;
  while(p->next != NULL) p = p->next;
  printf("%ld\n", p->p);
   
  return 0;
}