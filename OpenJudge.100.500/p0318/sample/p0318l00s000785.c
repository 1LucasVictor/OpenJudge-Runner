#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NIL NULL

struct node{
  int key;
  struct node *left;
  struct node *right;
  struct node *p;
};

typedef struct node * Node;

Node root;

/*??£?¨?*/
void Inorder_tree_walk(Node);
void Preorder_tree_walk(Node);
void insert(int);
void find(Node,int);
void delete(Node);
Node tree_Su(Node);
Node treeMini(Node);
Node treeSearch(Node,int);

/*main??¢??°*/
int main(){
  int i,x,num;
  char s[10];
  int check;

  scanf("%d",&num);
  for (i=0; i<num; i++){
    scanf("%s",s);

    if (strcmp("insert",s)==0){
      scanf("%d",&x);
      insert(x);
    }


    if  (strcmp("print",s)== 0){
      Inorder_tree_walk(root);
      puts("");

      Preorder_tree_walk(root);
      puts("");
    }



    if(strcmp("find",s)==0){
      scanf("%d",&x);
      find(root,x);

      }

    if(strcmp("delete",s)==0){
      scanf("%d",&x);
      delete(treeSearch(root,x));
    }


  }
  return 0;
}




/*???????????????*/
void Preorder_tree_walk(Node tree){
  printf(" %d",tree->key);
  if(tree != NIL){
    if((tree->left) != NIL)Preorder_tree_walk(tree->left);
    if((tree->right) != NIL)Preorder_tree_walk(tree->right);
  }
}
/*???????????????*/
void Inorder_tree_walk(Node tree){

  if(tree != NIL){

    if((tree->left) != NIL){Inorder_tree_walk(tree -> left);}

    printf(" %d",tree->key);

    if(tree->right!=NIL){Inorder_tree_walk(tree->right);}
  }
}


/*?????\*/
void insert(int k){
 Node y=NIL;
 Node x=root;
 Node z;

 /*??°??????key????????????*/
    z = malloc(sizeof(struct node));
    z->key=k;
    z->left=NIL;
    z->right=NIL;


     while(x!=NIL){
       y=x;
       if(z->key < x->key) x=x->left;
       else x=x->right;
     }
     z->p=y;

     if(y == NIL) root=z;
     else if((z->key) < (y->key)) y->left=z;
     else y->right=z;
}

 void find(Node tree, int k){

   while (tree != NIL && k != tree->key){

     if(k < tree->key) tree = tree->left;
     else tree=tree->right;
   }
   if( tree==NIL)puts("no");
   if( tree!=NIL)puts("yes");
 }

void delete(Node z){
  Node x,y;


  if(z->left == NIL || z->right == NIL)y=z;
  else y = tree_Su(z);


  if(y->left != NIL)x = y->left;
  else x = y->right;

  if(x!=NIL)x->p = y->p;

  if(y->p == NIL)root=x;
  else if (y ==  y->p->left)y->p->left =x;
    else y->p->right =x;

  if(y != z) z->key = y->key;

}
Node tree_Su(Node x){

  Node y;
  if(x->right != NIL)return treeMini(x->right);

  y=x->p;

  while(y != NIL && x == y->right){

    x=y;
    y=y->p;
  }


return y;
}

Node treeMini(Node x){

  while(x->left != NIL){
    x=x->left;

  }


  return x;
}
Node treeSearch(Node x, int k){

  while(x != NIL && k != x->key){

    if(k < x->key)x = x->left;
    else x=x->right;

  }

  return x;
}