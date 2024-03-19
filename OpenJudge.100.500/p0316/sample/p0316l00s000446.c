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
  while(x->left!=NIL){
    x=x->left;
  }
  return x;
}
 
Node treeSearch(Node u, int k){
  if(u==NIL || k==u->key) return u;
  if(k < u->key){ 
    return treeSearch(u->left,k);
  }
  else { 
    return treeSearch(u->right,k);
  }
}
 
Node treeSuccessor(Node x){
  Node y;
  if(x->right!=NIL) return treeMinimum(x->right);
  y=x->parent;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}
 
Node treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y
  if(z->left==NIL || z->right==NIL){ y=z;}//zが子を持たないか、子を1つ持つ場合は入力節点のz
  else {y= treeSuccessor(z);}//zが子を2つ持つ場合はzの次節点
  if(y->left!=NIL){//yの子xを決める
    x=y->left;//yに左の子があれば、xはyの左の子
  }
  else {
    x=y->right;//yに左の子がなければ、xはyの右の子
  }
  if(x!=NIL){ x->parent=y->parent;}//xの親を設定する
  if(y->parent==NIL){ root=x;}
  else if(y==y->parent->left){
    y->parent->left=x;
  }//yがその親の左の子ならば、pの左の子をxとする
  else{
    y->parent->right=x;
  }//yがその親の右の子ならば、pの右の子をxとする
  if(y!=z){//zの次節点が削除された場合
    z->key=y->key;//yのデータをzにコピーする
  }
    return y;
}
 
 
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
 
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  //printf("%d\n",x->key);
  while(x!=NIL){//親を設定
    y=x;
    if(z->key < x->key){ 
      x=x->left;
    }//左の子へ移動
    else x=x->right;//右の子へ移動
  }
  z->parent=y;
  if(y==NIL){ 
    root = z;
  }
  else if(z->key < y->key){
    y->left=z;
  }//zをyの左の子にする
  else y->right=z;//zをyの右の子にする
}
 
void inorder(Node u){
  if(u!=NIL){
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
  }
}
void preorder(Node u){
  if(u!=NIL){
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
  }
}
 
 
int main(){
  
  int n, i, x;
  char com[20];
  
  scanf("%d", &n);
  root=NIL;
  
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }

  return 0;
}