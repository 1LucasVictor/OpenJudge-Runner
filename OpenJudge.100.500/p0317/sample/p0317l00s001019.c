#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node{
  int key;
  struct Node *l,*r,*p;
};

void insert(int );
void inorder(struct Node *);
void preorder(struct Node *);
struct Node *find(struct Node *,int);

struct Node *root,*NIL;

int main(){
  int n,i,h;
  struct Node *a;
  char x[10];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    strcpy(x,"");
    scanf("%s",x);
    if(0==(strcmp(x,"print"))){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }else if(0==(strcmp(x,"insert"))){
      scanf("%d",&h);
      insert(h);
    }else if(0==(strcmp(x,"find"))){
      scanf("%d",&h);
      a=find(root,h);
     if(a==NIL) printf("no\n");
      else       printf("yes\n");
    }  
     }
    return 0;
  }


void insert(int k){
  struct Node *x=root,*y=NIL,*z;

  z=(struct Node *)malloc(sizeof(struct Node));

  z->key=k;
  z->l=NIL;
  z->r=NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key) x=x->l;
    else    x=x->r;
  }
  z->p=y;
  if(y==NIL) root=z;
  else{
    if(z->key < y->key) y->l=z;
    else  y->r=z;
  }
}

void inorder(struct Node *u){
  if(u==NIL) return;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}

void preorder(struct Node *u){
  if(u==NIL) return ;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}

struct Node *find(struct Node *a,int k){
  while(1){
    if(a->key==k) break;
    if(k < a->key && a->l !=NIL) a=a->l;
    else if(k > a->key && a->r!=NIL)   a=a->r;
    else return NIL;
   }
  return a;
    }

