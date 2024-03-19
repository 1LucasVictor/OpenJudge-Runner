#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};
typedef struct node * N;

N root,NIL;
int maxh;

N treeSearch(N z,int k){
  while(z != NIL && k != z->key){
    if(k < z->key) z = z->l;
    else z = z->r;
  }
  return z;
}

void insert(int k){
  int H;
  N y = NIL;
  N x = root;
  N z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->l;
    }
    else {
      x = x->r;
    }
  }

  z->p = y;
  if(y == NIL){
    root = z;
  }
  else {
    if(z->key < y->key){
      y->l = z;
    }
    else{
      y->r = z;
    }
  }
}

void inorder(N z){
  if(z == NIL)return;
  inorder(z->l);
  printf(" %d",z->key);
  inorder(z->r);
}
void preorder(N z){
  if(z == NIL)return;
  printf(" %d",z->key); 
  preorder(z->l);
  preorder(z->r);
}

int main(){
  int n,i,x;
  char com[20];
  scanf("%d",&n);
  maxh = 0;
  for(i=0;i<n;i++){
    scanf("%s",com);
    if(com[0] == 'f'){
      scanf("%d",&x);
      N t = treeSearch(root,x);
      if(t != NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(com[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

