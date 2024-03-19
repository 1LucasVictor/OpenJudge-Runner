#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
  int num;
  struct Node *left;
  struct Node *right;
  struct Node *parent;
  struct Node *next;
};

struct Node *root,*NIL;

struct Node *makeNode(void);
void initialize(struct Node*);
void insert(int);
void inParse(struct Node*);
void preParse(struct Node*);
void findNumber(struct Node*,int);

int main(){
  int n;
  int i=0,j,number;
  char order[10];

  scanf("%d",&n);


  for(i=0;i<n;i++){
    scanf("%s",order);
    if(strcmp(order,"insert")==0){
      scanf("%d",&number);
      insert(number);
    }
    if(strcmp(order,"print")==0){
      inParse(root);
      printf("\n");
      preParse(root);
      printf("\n");
    }
    if(strcmp(order,"find")==0){
      scanf("%d",&number);
      findNumber(root,number);     
    }
  }

  return 0;
}


struct Node *makeNode(void){	
  return  (struct Node*)malloc(sizeof(struct Node));
}  

  
void insert(int key){
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z;
  
  z=makeNode();

  z->num=key;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->num < x->num){
      x=x->left;
    }
    else{
      x=x->right;
    }
  }

  z->parent=y;
  if(y==NIL){
    root=z;
  }
  else{
    if(z->num < y->num){
      y->left=z;
    }
    else{
      y->right=z;	
    }
  }

}
  
void inParse(struct Node *p){
  if(p==NIL) return;
  
  inParse(p->left);
  printf(" %d",p->num);
  inParse(p->right);
}

void preParse(struct Node *p){
  if(p==NIL) return;

  printf(" %d",p->num);
  preParse(p->left);
  preParse(p->right);
}
void findNumber(struct Node *p,int number){
  while(p!=NIL && number!=p->num){
    if(p->num<number){
      p=p->right;
    }
    else{ p=p->left; }
  }
  if(p==NIL) printf("no\n");
  else printf("yes\n");

}