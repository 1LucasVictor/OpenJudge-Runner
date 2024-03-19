#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

typedef struct node{
  int key;
  struct node *p;
  struct node *l;
  struct node *r;
}Node;

Node *T;

void insert(int);
void print(Node *);
void inorder(Node *);
void preorder(Node *);
Node *find(Node *,int);
void Delete(Node *);
Node *TreeSuccessor(Node *);
Node *treeMinimum(Node *);

int main()
{
  int n,i,k,j;
  char command[10];
  Node *z;

  //T->l=NIL;
  //T->r=NIL;
  
  scanf("%d",&n);
  if(n>500000) exit(1);
  for(i=0;i<n;i++){
    scanf("%s",command); //コマンド検出
    if(command[0] == 'i'){ //insert
      scanf("%d",&k);
      insert(k);
    }
    else if(command[0] == 'p') //print
      print(T);
    else if(command[0] == 'f'){ //find
      scanf("%d",&k);
      z = find(T,k);
      if(z!=NIL) printf("yes\n");
      else printf("no\n");
    }
    else{ //delete
      scanf("%d",&k);
      Delete(find(T,k));
    }
  }
  return 0;
}

void insert(int k)
{
  Node *x,*y,*z;

  y = NIL; //xの親(rootの親だからNIL)
  x = T; //root

  z = (Node *)malloc(sizeof(Node));
  
  z->key = k;
  z->l=NIL;
  z->r=NIL;
  
  while(x != NIL){
    y = x; //親を設定
    if(z->key < x->key) x = x->l; //左の子に移動
    else x = x->r; //右の子に移動
  }
  z->p = y;
  
  if(y==NIL) //Tが空の場合
    T = z;
  else if(z->key < y->key)
    y->l = z; //zをyの左の子にする
  else
    y->r = z; //zをyの右の子にする
  //printf(" %d",x->p);
}

void print(Node *root)
{
  if(root==NIL) return;
  
  inorder(root); //左→上→右
  printf("\n");
  preorder(root); //左→右→上
  printf("\n");
}

void inorder(Node *root)
{
  if(root==NIL) return;
  inorder(root->l); //左
  printf(" %d",root->key); //上
  inorder(root->r); //右
}

void preorder(Node *root)
{
  if(root==NIL) return;
  printf(" %d",root->key); //上
  preorder(root->l); //左
  preorder(root->r); //右
}

Node *find(Node *x,int k)
{
  while(x != NIL && k != x->key){ //insertのとこと同じ要領で探していく
    if(k < x->key) x = x->l;
    else x = x->r;
  }
  return x;
}

void Delete(Node *z)
{
  Node *y; //削除するやつ
  Node *x; //yの子

  if(z->l == NIL || z->r == NIL) y=z; //zが子を持たない or 一つ子持ちならそのままもってくる
  else y = TreeSuccessor(z); //二つ子持ちの場合、zの右側の木から一番小さいやつをもってくる

  if(y->l != NIL) x = y->l; //
  else x = y->r;

  if(x != NIL) x->p = y->p; //yに子がいた場合その子とyの親を繋げる
  if(y->p == NIL) T = x; //yに親がいないということはrootなのでxがrootになる
  else if(y == y->p->l) y->p->l = x; //yの親の左の子か右の子かを判断して繋げる
  else y->p->r = x; //同上

  if(y != z) z->key = y->key; //zの次節点が削除されたらyのデータをzにコピーする

  free(y);
}

Node *TreeSuccessor(Node *x) 
{
  Node *y; //xの親
  
  if(x->r != NIL) return treeMinimum(x->r); 
  y = x->p;
  while(y != NIL && x == y->r){ //xがyの右側の子である限りyの方が小さいからyを辿っていく
    x = y;
    y = y->p;
  }
  return y;
}

Node *treeMinimum(Node *x) //xから一番数字の小さいやつを探す
{
  while(x->l != NIL)
    x = x->l; 
  return x;
}

