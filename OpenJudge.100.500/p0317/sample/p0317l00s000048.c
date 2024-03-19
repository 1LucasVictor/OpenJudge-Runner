#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct NODE{
  int k;
  struct  NODE *p;
  struct NODE *l;
  struct NODE *ri;
};
typedef struct NODE * node;
#define N NULL
node r;
void ins(int o){
  node a=N;
  node b=r;
  node c;
  c=malloc(sizeof(struct NODE));
  
  c->k = o;
  c->l = N;
  c->ri = N;
  while(b!=N){
    a = b;
    if(c->k < b->k){
      b=b->l;
    }
    else{
      b=b->ri;
    } 
  }
  c->p=a;
  if(a==N){
    r=c;
  }
  else{
    if(c->k < a->k){
      a->l=c;
    }
    else{
      a->ri=c;
    }
  }
}

void T(node R){
  if(R==N)return;
  T(R->l);
  printf(" %d",R->k);
  T(R->ri);
}

void S(node R){
  if(R==N)return;
  printf(" %d",R->k);
  S(R->l);
  S(R->ri);
}
node s(node l,int c){

  while(l !=N && c != l->k){
    if(c < l->k) {
      l = l->l;
    }
    else {
      l = l->ri;
    }
  }
  return l;
}

int main(){
  int i,j,o,h;
  char O[10];
  scanf("%d",&o);
  for(i=0;i<o;i++){
    scanf("%s",O);
    if(strlen(O)==6){
      scanf("%d",&h);
      ins(h);
    }
    else if(strlen(O)==4){
      scanf("%d",&h);
      node f = s(r,h);
      if(f != N)printf("yes\n");
      else printf("no\n");
    }
    else{
      T(r);
      printf("\n");
      S(r);
      printf("\n");
    }
  }
  return 0;
}

