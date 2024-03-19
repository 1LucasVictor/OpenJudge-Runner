#include <stdio.h>
#include <stdlib.h>

int n, key;

struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
};

struct node *root, *NIL;

void insert(struct node *, int key);
struct node* find(struct node *, int key);
void delete(struct node*, int);
struct node* treeSuccessor(struct node*);
struct node* min(struct node*);
void inorder(struct node *);
void preorder(struct node *);
	  
int main(){

  int i, j, k;
  char order[20];
  struct node *result;
  
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%s", order);

    if(order[0]=='i'){
      scanf("%d", &key);
      insert(root, key);
     
    }//insert

    else if(order[0]=='f'){

      scanf("%d", &key);
      result=find(root, key);
      if(result != NIL) printf("yes\n");
      else printf("no\n");
      
    }
    else if(order[0]=='d'){

      scanf("%d", &key);
      delete(root, key);
    }
    else if(order[0]=='p'){
      
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }//print
  }
  return 0;
}

void insert(struct node *x, int key){

  struct node *y=NIL;
  struct node *z;

  z=(struct node*)malloc(sizeof(struct node));
  z->key=key;
  z->left=NIL;
  z->right=NIL;
  
  while(x!=NIL){//適した入れる場所見付けるまで繰り返す
    y=x;
    if(z->key < x->key){
      x=x->left;
    }
    else x=x->right;
  }
  z->parent=y;

  if(y==NIL){
    root = z;
  }
  else {
    if(z->key < y->key){
    y->left = z;
    }
    else y->right=z;
  }
}
struct node* find(struct node *x, int key){

  while(x!=NIL && x->key!=key){

    if(key< x->key) x=x->left;
    else x=x->right;
    
  }
  return x;  
}
void delete(struct node *x, int key){

  struct node *z= find(x, key);
  struct node *y; //削除する対象をyとおく
  struct node *ychild;

  //2つとも葉か1つ葉
  if(z->left == NIL || z->right == NIL) y=z; //削除するzの内容をyに入れる
  //2つとも子であった場合
  else y=treeSuccessor(z); //次節点(右の子の最小値)がzになり代わる。それによってzは削除

  //yの子を見つける
  if(y->left!=NIL){
    x=y->left;
  }else{
    x=y->right;
  }

  if(x!=NIL){
    x->parent = y->parent;
  }

  //親だった場合
  if(y->parent == NIL){
    root = ychild;
  }
  else if(y==y->parent->left){
    y->parent->left =x;
  }
  else{
    y->parent->right=x;
  }
  
  if(y!=z){
    z->key = y->key;
  }
  
  free(y);
  
}
struct node* treeSuccessor(struct node *x){

  struct node *p;

  if(x->right != NIL) return min(x->right);
  p=x->parent;
  while(p != NIL && x==p->right){
    x=p;
    p=p->parent;
  }
  return p;
}
struct node* min(struct node *m){
  while(m->left != NIL ) m=m->left;
  return m;
}
			   
void inorder(struct node *x){

  if(x==NIL) return;

  inorder(x->left);
  printf(" %d", x->key);
  inorder(x->right);
}
void preorder(struct node *x){

  if(x==NIL) return;
  printf(" %d", x->key);
  preorder(x->left);
  preorder(x->right);
}
  


