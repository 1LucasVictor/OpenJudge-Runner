#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};
typedef struct node * Node;

Node root;

Node find(Node u, int k){
  while(u!=NULL && k != u->key){
    if(k<u->key)u=u->l;
    else u=u->r;
  }
  return u;
}

Node mini(Node x){
  while(x->l!=NULL)
    x=x->l;
  return x;
}

Node suc(Node x){
  if(x->r!=NULL)
    return mini(x->r);
  Node y=x->p;
  while(y!=NULL && x==y->r){
    x=y;
    y=y->p;
  }
  return y;
}

void insert(int k){
  Node x = root;
  Node y = NULL;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NULL;
  z->r = NULL;

  while(x!=NULL){
    y=x;
    if(z->key < x->key){
      x=x->l;
    }
    else {
      x=x->r;
    }
  }
  z->p=y;
  if(y==NULL){
    root=z;
  }
  else{
    if(z->key < y->key){
      y->l=z;
    }
    else{
      y->r=z;
    }
  }


}

void inorder(Node u){
  if(u==NULL)return ;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);

}
void preorder(Node u){
  if(u==NULL)return ;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}

void delete(Node z){
  Node x;
  Node y;

  if(z->l==NULL || z->r==NULL)
    y=z;
  else y=suc(z);
  if(y->l!=NULL){
    x=y->l;
  }
  else{
    x=y->r;
  }
  if(x!=NULL){
    x->p=y->p;
  }
  if(y->p==NULL){
    root=x;
  }
  else{
    if(y==y->p->l){
      y->p->l=x;
    }
    else{
      y->p->r=x;
  }
}
  if(y!=z){
    z->key=y->key;
  }
  free(y);
}

int main(){
  int n, i, x;
  char c[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", c);
    
    if ( c[0] == 'f' ){
      scanf("%d", &x);
      Node t = find(root, x);
      if ( t != NULL ) printf("yes\n");
      else printf("no\n");
    }
    
    else  if ( c[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( c[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(c[0]=='d'){
      scanf("%d", &x);
      delete(find(root,x));
    }
  }

  return 0;
}

