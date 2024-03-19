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

Node root = NIL;

Node treeMinimum(Node str){
  while(str->left!=NIL)str=str->left;
  return str;
}

Node treeSearch(Node m, int k){
  Node i=m;
  while(i!=NIL){
    if(i->key==k)return i;
    else if(i->key<k)i=i->right;
    else i=i->left;
    
  }
  return NIL;
}

Node treeSuccessor(Node str){
  Node sti;
  if(str->right!=NIL)return treeMinimum(str->right);
   sti=str->parent;
  while(sti!=NIL&&str==sti->right){
    str=sti;
    sti=sti->parent;
  }
  return sti;
}

void treeDelete(Node stl){
  Node sti; 
  Node str; 
  if(stl->left==NIL||stl->right==NIL)sti=stl;
  else sti=treeSuccessor(stl);
  
  if(sti->left!=NIL)str=sti->left;
  else str=sti->right;

  if(str!=NIL)str->parent=sti->parent;
  
  if(sti->parent==NIL)root=str;
  else if(sti==sti->parent->left)sti->parent->left=str;
  else sti->parent->right=str;

  if(sti!=stl)stl->key=sti->key;
  
  free(sti);
}

void insert(int k){
  Node sti = NIL;
  Node str = root;
  Node stl;

  stl = malloc(sizeof(struct node));
  stl->key = k;
  stl->left = NIL;
  stl->right = NIL;

  while(str!=NIL){
    sti=str;
    if(stl->key<str->key)str=str->left;
    else str=str->right;
  }
  stl->parent=sti;
  if(sti==NIL)root=stl;
  else if(stl->key<sti->key)sti->left=stl;
  else sti->right=stl;
  
}

void inOrder(Node m){
  if(m==NIL)return;
  inOrder(m->left);
  printf(" %d",m->key);
  inOrder(m->right);
}

void preOrder(Node m){
  if(m==NIL)return;
  printf(" %d",m->key);
  preOrder(m->left);
  preOrder(m->right);
}


int main(){
  int n, i, str;
  char comand[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", comand);
    if ( comand[0] == 'f' ){
      scanf("%d", &str);
      Node t = treeSearch(root, str);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( comand[0] == 'i' ){
      scanf("%d", &str);
      insert(str);
    } else if ( comand[0] == 'p' ){
      inOrder(root);
      printf("\n");
      preOrder(root);
      printf("\n");
    } else if ( comand[0] == 'd' ){
      scanf("%d", &str);
      treeDelete(treeSearch(root, str));
    }
  }

  return 0;
}

