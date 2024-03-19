#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

Node treeMinimum(Node x){

  while(x->left != NIL)
    x = x->left;
  return x;

}

Node treeMaximum(Node x){

  

}

Node treeSearch(int k){

 Node x=root;
  int tt=0;
  while(x!=NIL)
{
    if(x->key==k) tt=1;
    if(k<x->key) x = x->left;
    else x = x->right;
  }
if(tt)printf("yes\n");
  else printf("no\n");
   

}

Node treeSuccessor(Node x){
    

}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y



}



void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

   if(x==NIL) root=z;
   else
     {
       while(x != NIL)
         {
           if(x->key >= k) y= x->left;

           else y= x->right;

      if(y!=NIL) y->parent=x;
      else
        {
          if(x->key >=k) x->left = z;
          else x->right = z;
        }
      x=y;  
             
         }
     }


}

void inorder(Node u){


if(u == NIL)return;

inorder(u->left);
printf(" %d",u->key);
inorder(u->right);

}
void preorder(Node u){


if(u == NIL)return;
      
  printf(" %d",u->key);
preorder(u->left);
preorder(u->right);


}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      treeSearch(x);
}
      else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}
