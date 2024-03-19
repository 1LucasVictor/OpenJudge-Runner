#include<stdio.h>
#include<stdlib.h>
#define MAX 500000

struct NODE{
  int key;
 struct NODE *parent;
 struct NODE *left;
 struct NODE *right;
};

typedef struct NODE NODE;

NODE T[MAX];
NODE *root,*NIL;

int scancommand(char *);
void insert(int);
int find(NODE *,int);
void inorder(NODE *);
void preorder(NODE *);

int main()
{
  int n;
  int i,j;
  int x;
  int t;
  char command[30];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",command);
    //printf("%s\n",command);
    
    if(scancommand(command) == 1){
      scanf("%d",&x);
      insert(x);
      //printf("%d\n",x);
    }
    else if(scancommand(command) == 2){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(scancommand(command) == 3){
      scanf("%d",&x);
      t = find(root, x);
      if(t == 0) printf("no\n");
      else printf("yes\n");
    }
  }
  
  return 0;
}

int scancommand(char *com)
{
  if(com[0] == 'i') return 1;
  else if(com[0] == 'p') return 2;
  else if(com[0] == 'f') return 3;
  else return 0;
}

void insert(int k)
{
  //printf("===insert===\n");
  NODE *y = NIL; // xの親
  NODE *x = root; //Tの根
  NODE *z;

  z = (NODE *)malloc(sizeof(NODE));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  
  while(x != NIL){
    y = x; //親を設定
    if(z->key < x->key) x = x->left;
    else x = x->right;
       }
  z->parent = y;

  if (y == NIL){ //Tが空の場合
    root = z;
  }
  else if (z->key < y->key) y->left = z;
  else y->right = z;
}

int find(NODE *x,int k)
{
  while(x != NIL && k != x->key){
    if( k < x->key ) x = x->left;
    else x = x->right;
  }
  if(x == NIL) return 0;
  else return 1;
}

void inorder(NODE *u){
  if( u == NIL ) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(NODE *u){
  if( u == NIL ) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}


