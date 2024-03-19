#include <stdio.h>
#include <stdlib.h>

typedef struct STACKnode* link;
struct STACKnode{
  int n;
  link next;
};
link head=NULL;

link NEW(int n, link next){
  link x;
  x = malloc(sizeof(*x));
  x->n = n;
  x->next = next;
  return x;
}

void STACKpush(int n){
  head = NEW(n, head);
}

int STACKpop(void){
  int n;
  link t;
  n = head->n;
  t = head->next;
  free(head);
  head=t;
  return n;
}

int main(void){
  int i, n, N=0;
  char t;
  char *a=malloc(10*sizeof(char));
  while(scanf("%c", &t)!=EOF){
    a[N]=t;
    N++;
  }
  for(i=0; i<N; i++){
    if(a[i]=='+')  STACKpush(STACKpop() + STACKpop());
    if(a[i]=='-'){
      int n1=STACKpop(), n2=STACKpop();
      STACKpush(n2-n1);
    }
    if(a[i]=='*')  STACKpush(STACKpop() * STACKpop());
    if((a[i]>='0') && (a[i]<='9')) STACKpush(0);
    while((a[i]>='0') && (a[i]<='9'))
      STACKpush(10*STACKpop() + a[i++]-'0');
  }
  printf("%d\n", STACKpop());
  return 0;
}