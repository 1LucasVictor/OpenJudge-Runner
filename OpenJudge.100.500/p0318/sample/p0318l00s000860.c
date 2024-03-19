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

int findr(int k, struct node *z){
  if(z->key == -1){
    return 0;
  }else if(z->key == k){
    return 1;
  }
  if(k < z->key){
    return findr(k, z->l);
  }else{
    return findr(k, z->r);
  }
}

int find(int k){
  int l = findr(k, head);
  return l;
}

void print(void){
  in(head);
  printf("\n");
  pre(head);
  printf("\n");
}

void delete(int k){
  struct node *z = head;
  int a;
  while(z->key != -1){
    if(k == z->key){
      if(z->l->key == -1 && z->r->key == -1){
	z->key = -1;
	return;
      }else if(z->l->key == -1){
	if(a){
	  z->p->l = z->r;
	  z->r->p = z->p;
	  return;
	}else{
	  z->p->r = z->r;
	  z->r->p = z->p;
	  return;
	}
      }else if(z->r->key == -1){
	if(a){
	  z->p->l = z->l;
	  z->l->p = z->p;
	  return;
	}else{
	  z->p->r = z->l;
	  z->l->p = z->p;
	  return;
	}
      }else{
	z->key = z->r->key;
	k = z->key;
      }
    }
  
    if(k < z->key){
      z = z->l;
      a = 1;
    }else{
      z = z->r;
      a = 0;
    }
  }
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
    }else if(!strcmp(s, "find")){
      scanf("%d", &x);
      if(find(x)){
	printf("yes\n");
      }else{
	printf("no\n");
      }
    }else if(!strcmp(s, "delete")){
      scanf("%d", &x);
      delete(x);
    }
  }
  return 0;
}
