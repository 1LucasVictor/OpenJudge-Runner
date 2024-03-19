#include<stdio.h>
#include<stdlib.h>

struct Node{
  int key;
  struct Node *p;
  struct Node *l;
  struct Node *r;
};
typedef struct Node * Nodepointer;

Nodepointer root,nil;

void insert(int i){
  Nodepointer x = root;
  Nodepointer y = nil; /*parent*/
  Nodepointer z;

  z = (struct Node *)malloc(sizeof(struct Node));
  z->key = i;
  z->l = nil;
  z->r = nil;

  while(x != nil){
    y = x;
    if(x->key > z->key) x = x->l;
    else x = x->r;
  }

  z->p = y;

  if(y == nil) root = z;
  else{
    if(y->key > z->key) y->l = z;
    else y->r = z;
  }

}

void inorder(Nodepointer x){
    if(x == nil) return;
    inorder(x->l);
    printf(" %d",x->key);
    inorder(x->r);
}

void preorder(Nodepointer x){
    if(x == nil) return;
    printf(" %d",x->key);
    preorder(x->l);
    preorder(x->r);
}

Nodepointer find(Nodepointer x,int i){
  while(x != nil && i != x->key){
    if(x->key > i) x = x->l;
    else x = x->r;
  }
  return x;
}

int main(){
  int n,i,num;
  char c[20];

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%s",&c);
    if(c[0] == 'i'){
      scanf("%d",&num);
      insert(num);
    }
    else if(c[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(c[0] == 'f'){
      scanf("%d",&num);
      if(find(root,num) != nil) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}


