#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
  int key;
  struct node *p;
  struct node *l;
  struct node *r;
};
struct node *head;


void pre(struct node *u){
  if(u->key == -1){
    return;
  }
  printf(" %d", u->key);
  pre(u->l);
  pre(u->r);
}

void in(struct node *u){
  if(u->key == -1){
    return;
  }
  in(u->l);
  printf(" %d", u->key);
  in(u->r);
}

void insert(int u){
  struct node *z;
  z = (struct node *)malloc(sizeof(struct node));
  z->key = u;
  z->l = (struct node *)malloc(sizeof(struct node));
  z->r = (struct node *)malloc(sizeof(struct node));
  z->l->key = -1;
  z->r->key = -1;
  struct node *y;
  struct node *x;
  x = head;
  y = head->p;

  while(x->key != -1){
    y = x;
    if(u < x->key){
      x = x->l;
    }else{
      x = x->r;
    }
  }
    
  z->p = y;
  if(y->key == -1){
    head = z;
  }else if(z->key < y->key){
    y->l = z;
  }else{
    y->r = z;
  }
}

void print(void){
  in(head);
  printf("\n");
  pre(head);
  printf("\n");
}

int main(void){
  int i, n, x;
  head = (struct node *)malloc(sizeof(struct node));
  head->key = -1;
  head->l = (struct node *)malloc(sizeof(struct node));
  head->r = (struct node *)malloc(sizeof(struct node));
  head->p = (struct node *)malloc(sizeof(struct node));
  head->p->key = -1;
  head->l->key = -1;
  head->r->key = -1;
  char s[16];
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%s", s);
    if(!strcmp(s, "insert")){
      scanf("%d", &x);
      insert(x);
    }else if(!strcmp(s, "print")){
      print();
    }
  }
  return 0;
}
