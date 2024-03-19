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

/*宣言*/
void Inorder_tree_walk(Node);
void Preorder_tree_walk(Node);
void insert(int);
void find(Node,int);

/*main関数*/
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
  }
  return 0;
}




/*先行順巡回*/
void Preorder_tree_walk(Node tree){
  printf(" %d",tree->key);
  if(tree != NIL){
    if((tree->left) != NIL)Preorder_tree_walk(tree->left);
    if((tree->right) != NIL)Preorder_tree_walk(tree->right);
  }
}
 

/*中間順巡回*/
void Inorder_tree_walk(Node tree){
   
  if(tree != NIL){

    if((tree->left) != NIL){Inorder_tree_walk(tree -> left);}

    printf(" %d",tree->key);
     
    if(tree->right!=NIL){Inorder_tree_walk(tree->right);}
  }
}


/*挿入*/
void insert(int k){
 Node y=NIL;
 Node x=root;
 Node z;

 /*新しいkeyの初期化*/
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