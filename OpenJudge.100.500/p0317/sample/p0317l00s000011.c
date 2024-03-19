#include<stdio.h>
#include<stdlib.h>//NILを使う為                                                 
struct Node{
  int key;
  struct Node *right, *left, *parent;//                                         
};
struct Node *root , *NIL;//                                                     
struct Node*find(struct Node *u, int k);
void insert(int);
void inorder(struct Node*);
void preorder(struct Node*);
int main(){
  int n,i,x;
  char c[10];
 struct  Node*t;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",c);
    if(c[0]=='i'){
      scanf("%d",&x);
      insert(x);//挿入関数                                                      
    }else if(c[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }else{
      scanf("%d",&x);
      t=find(root,x);
      if(t!=NIL) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}
void insert(int k){
  struct Node *y=NIL,*x=root,*z;//                                              
  z=(struct Node *)malloc(sizeof(struct Node));//mallocを使って格納             
  z->key=k;//                                                                   
  z->left=NIL;
  z->right=NIL;
  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }else{
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
root=z;
  }else{
    if(z->key < y->key){
      y->left=z;
    }else{
      y->right=z;
    }
  }
}
struct Node*find(struct Node *u, int k){
  while(u!=NIL && k!=u->key){
    if(k<u->key) u=u->left;
    else u=u->right;
  }
  return u;
}
void inorder(struct Node *u){
  if(u==NIL)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(struct Node *u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

  

