#include<stdio.h>
#include<stdlib.h>
#define NIL NULL


struct node{
  struct node *parent;
  struct node *l;
  struct node *r;
  int key;
};

typedef struct node * Node;

void insert(Node,int);
void PrintInorder(Node );
void PrintPreorder(Node );
Node find(Node ,int);
Node rt,newnode;

main(){

  int n,i,k;
  char T[20];

  scanf("%d",&n);

  rt = malloc(sizeof(struct node));

  for( i=0 ; i<n ; i++ ){
    scanf("%s",T);

    if( T[0] == 'i'){
      scanf("%d",&k);

      if( i != 0)
    insert(rt, k);

      else
    rt->key = k;
    }
    else if(T[0] == 'p'){
      PrintInorder(rt);
      printf("\n");
      PrintPreorder(rt);
      printf("\n");
    }
    else{
      scanf("%d",&k);
      if(find(rt,k)==NIL)printf("no\n");
      else printf("yes\n");
    }
  }
  return 0;
}

void insert(Node T, int k){

  Node x,y,z;
  z = malloc(sizeof(struct node));
  z->key =k;
  z->l = z->r = NIL;

  y = NIL;
  x = T;
  while(1){
    y = x;
    if( z->key < x->key )
      x = x->l;
    else
      x = x->r;

    if( x == NIL )break;
  }
  z->parent =y;
    if( y == NIL )
      T = z;
    else if(z->key < y->key)
      y->l = z;
    else
      y->r = z;

}



void PrintPreorder(Node T){
  if(T != NIL){
    printf(" %d",T->key);

    PrintPreorder(T->l);
    PrintPreorder(T->r);

  }
  else return ;
}

Node find(Node T,int k){
  if(T == NIL || k == T->key)return T;
  if(k < T->key )return find(T->l,k);
  else return find(T->r,k);
}

void PrintInorder(Node T)
{
  if(T != NIL){
     PrintInorder(T->l);

  printf(" %d",T->key);

   PrintInorder(T->r);
  }
  else return;

}