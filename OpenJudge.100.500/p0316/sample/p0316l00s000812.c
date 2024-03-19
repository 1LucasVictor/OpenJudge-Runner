#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *p;
  int key;
};
typedef struct node *Node;
#define NIL NULL
Node root;
Node treeMinimum(Node a);
Node treeMaximum(Node a);
Node treeSearch(Node u, int k);
Node treeSuccessor(Node a);
void treeDelete(Node a);
void insert(int k);
void inorder(Node u);
void preorder(Node u);
int main(){
       int n,i,x;
       char com[20];
       scanf("%d",&n);
       
       for(i = 0 ; i<n; i++){
	 scanf("%s",com);
	 
	 if(com[0] == 'f'){
	 scanf("%d",&x);
	 Node t = treeSearch(root,x);
	 if(t!=NIL)printf("yes\n");
	 else{
	   printf("no\n");
       }
	 
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
       else if(com[0] == 'd'){
	 scanf("%d",&x);
	 treeDelete(treeSearch(root,x));
       }
     }
     return 0;
   }



Node treeMinimum(Node a){
  while(a->left!=NIL){
    a = a->left;
  }
  return a;
}

Node treeMaximum(Node a){
  while(a->right!=NIL){
    a = a->right;
  }
  return a;
}

Node treeSearch(Node u, int k){
  while(u!=NIL && k != u->key){
    if(k < u->key)u= u->left;
    else{
      u=u->right;
    }
  }
    return u;
  }


Node treeSuccessor(Node a){
  if(a->right != NIL) return treeMinimum(a->right);
  Node y;
  y = a->p;
  while(y != NIL && a == y->right){
    a = y;
    y = y->p;
  }
  return y;
}

void treeDelete(Node a){
  Node y;
  Node x;
  if(a->left ==NIL || a->right==NIL)y=a;
  else{
    y = treeSuccessor(a);
  }
  if(y->left!=NIL)x = y->left;
  else {
    x = y->right;
  }

    if(x != NIL)x->p = y->p;
  if(y->p == NIL)root = x;
  else if(y==y->p->left) y->p->left = x;
  else{
    y->p->right = x;
  }
  if(y!=a)a->key = y->key;
}


 void insert(int k){
   Node y = NIL;
   Node x = root;
   Node z;

   z = malloc(sizeof(struct node));
   z ->key = k;
   z ->left = NIL;
   z ->right = NIL;

   while(x!= NIL){
     y= x;
     if(z->key < x->key) x= x->left;
   else{
     x = x->right;
 }
   }
     z->p = y;

     if(y == NIL) root =z;
     else if(z->key < y->key) y->left = z;
     else {
       y ->right =z;
     }
 }


 void inorder(Node u){
   if(u != NIL){
     inorder(u->left);
     printf(" %d", u->key);
     inorder(u->right);
   }
   else{
     return;
   }
 }

   void preorder(Node u){
     if(u!=NIL){
       printf(" %d",u->key);
       preorder(u->left);
       preorder(u->right);
     }
     else{
       return;
     }
   }

