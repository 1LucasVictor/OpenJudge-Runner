#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;

#define NIL NULL

Node root;

void inorder(Node x){
  if(x==NIL) return;
  inorder(x->left);
  printf(" %d",x->key);
  inorder(x->right);
}

void preorder(Node x){
  if(x==NIL) return;
  printf(" %d",x->key);
  preorder(x->left);
  preorder(x->right);
}

Node treeMinimum(Node x){
  while(x->left!=NIL) x=x->left;
  return x;
}

Node treeMaximum(Node x){
  while(x->right!=NIL) x=x->right;
  return x;
}


/* B
Node treeSearch(Node u, int k){

}*/

Node treeSuccessor(Node x){
  if(x->right!=NIL) return treeMinimum(x->right);
  Node y=x->parent;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}
/*
void treeDelete(Node x){
Node y;
Node x;


}
*/

void insert(int k){
  Node y=NIL;
  Node x=root;
  Node z;

  z=malloc(sizeof(struct node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
 
  while(x!=NIL){
    y=x;
    if(z->key < x->key) x=x->left;
    else x=x->right;
  }
  z->parent=y;

  if(y==NIL) root=z;
  else if(z->key < y->key) y->left=z;
  else y->right=z;
}

int main(){
  int n,i,x;
  char com[20];
  scanf("%d",&n); //n=命令の数//

  for(i=0;i<n;i++){
    scanf("%s",com);
    /* Bにて
       if(com[0]=='f'){
       scanf("%d",&x);
       Node t=treeSearch(root,x);
       if(t!=NIL) printf("yes\n");
       else printf("no\n");
       }else */
    
    if(com[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }else if(com[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }

    /* Cにて
       else if(com[0]=='d'){
       scanf("%d",&x);
       treeDelete(treeSearch(root,x));
       }*/
  }
  return 0;
}
