#include <stdio.h>
#include <stdlib.h>

typedef struct data *node;
struct data{
  int key;
  node p;
  node l;
  node r;
};

node root,NIL;

void insert(int k){
  node y = NIL;
  node x = root;
  node z;

  z = (node)malloc(sizeof(struct data));
  z->key = k;
  z->l = NIL;
  z->r = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->l;
    else x = x->r;
  }
  z->p = y;
  if(y == NIL)root = z;
  else{
    if(z->key < y->key)y->l = z;
    else y->r = z;
  }
}

void InOrder(node u){
  if(u == NIL) return;
  InOrder(u->l);
  printf(" %d",u->key);
  InOrder(u->r);
}

void Preorder(node u){
  if(u == NIL)return;
  printf(" %d",u->key);
  Preorder(u->l);
  Preorder(u->r);
}

node find(node x,int k){
  while(x != NIL && k != x->key){
    if(k < x->key) x = x->l;
    else x = x->r;
  }
  return x;
}

int main(){
  int n,i,a;
  char str[10];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",str);

    if(str[0] == 'f'){
      scanf("%d",&a);
      node t = find(root,a);
      if(t != NIL) printf("yes\n");
      else printf("no\n");
    }

    if(str[0] == 'i'){
      scanf("%d",&a);
      insert(a);
    }

    else if(str[0] == 'p'){
      InOrder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }

  return 0;
}

