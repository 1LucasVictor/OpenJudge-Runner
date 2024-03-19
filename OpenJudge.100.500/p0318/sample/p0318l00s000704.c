#include <stdio.h>
#include <stdlib.h>

struct node{
  int key;
  struct node *r,*l,*p;
};

typedef struct node Node;

Node *root,*nil;

void insert(int t){
  Node *x=root,*y=nil,*z;

  z=malloc(sizeof(Node));
  z->key = t;
  z->r=nil;
  z->l=nil;

  while(x!=nil){
    y=x;

    if(z->key < x->key){
      x = x->l;
    }
    else {
      x = x->r;
    }
  }

  z->p = y;
  if(y==nil)root = z;
  else {
    if(z->key < y->key){
      y->l = z;
    }
    else {
      y->r = z;
    }
  }
}

void inorder(Node *q){
  if(q==nil)return;

  inorder(q->l);
  printf(" %d",q->key);
  inorder(q->r);
}
void preorder(Node *q){
  if(q==nil)return;

  printf(" %d",q->key);
  preorder(q->l);
  preorder(q->r);
}

Node * find(int t){
  Node *aaa=root;

  while(1){
    if(aaa==nil){
      break;
    }
    else if(aaa->key == t){
      //printf("%d     %p p=%p l=%p r=%p\n",t,aaa,aaa->p,aaa->l,aaa->r);
      break;
    }
    else if(aaa->key < t){
      aaa = aaa -> r;
    }
    else {
      aaa = aaa-> l;
    }
  }

  return aaa;
}

void delete(int t){
  Node *aaa,*bbb,*ccc,*ddd,*eee;

  aaa = find(t);
  //printf("fff    key=%d nil=%p p=%p l=%p r=%p\n",aaa->key,nil,aaa->p,aaa->l,aaa->r);
  if(aaa->l == nil && aaa->r == nil){
    //printf("test0\n");
    if(aaa->p->l == aaa){
      aaa->p->l = nil;
    }
    else {
      aaa->p->r = nil;
    }
  }
  else if(aaa->l == nil || aaa->r == nil){
    if(aaa->p->l == aaa){
      if(aaa->l!=nil){
	aaa->p->l = aaa->l;
	aaa->l->p = aaa->p;
      }
      else {
	aaa->p->l = aaa->r;
	aaa->r->p = aaa->p;
      }
    }
    else {
      if(aaa->l!=nil){
	aaa->p->r = aaa->l;
	aaa->l->p = aaa->p;
      }
      else {
	aaa->p->r = aaa->r;
	aaa->r->p = aaa->p;
      }
    }
  }
  else {
    //printf("test1\n");
    bbb = aaa->r;
    while(1){
      if(bbb == nil)break;

      ccc = bbb;
      bbb = bbb->l;
    }
    //printf("test2\n");
    aaa->key = ccc->key;


    
    
    
    //printf("test3\n");
    if(ccc->r!=nil)
    ccc->r->p = ccc->p;



    
    //printf("test3.1\n");
    if(ccc->p == aaa){
      // printf("test3.2\n");
      ccc->p->r = ccc->r;
    }
    else{
      // printf("test3.3\n");
      ccc->p->l = ccc->r;
    }
    // printf("test4\n");
    aaa = ccc;
  }
  free(aaa);
}   

int main(){
  int n,i,j,t;
  char s[10];
  Node *k;

  root = nil;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",s);
    if(s[0]=='i'){
      scanf("%d",&t);
      insert(t);
    }
    else if(s[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(s[0]=='f'){
      scanf("%d",&t);
      k = find(t);
      if(k==nil)printf("no\n");
      else printf("yes\n");
    }
    else if(s[0]=='d'){
      scanf("%d",&t);
      delete(t);
    }
  }
  return 0;
}

