#include <stdio.h>
#include <stdlib.h>

struct Node{
  int key;
  struct Node *pa,*le,*ri;
};

struct Node *ro,*NIL;

void insert(int);
void pre(struct Node *);
void ino(struct Node *);
struct Node * find(struct Node *,int);

int main(){
  int num,buf;
  int i;
  char word[10];
  struct Node * buff;
  scanf("%d",&num);
  
  for(i=0;i<num;i++){
    scanf("%s",word);
    scanf("%d",&buf);
    if(word[0]=='i'){
      insert(buf);
    }else if(word[0]=='p'){
      ino(ro);
      printf("\n");
      pre(ro);
      printf("\n");
    }else if(word[0]=='f'){
      if((buff=find(ro,buf))!=NIL) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

void insert(int buf){
  struct Node *x,*y,*z;
  y=NIL;
  x=ro;

  z=(struct Node *)malloc(sizeof(struct Node));
  z->key=buf;
  z->le=NIL;
  z->ri=NIL;
  
  while(x!=NIL){
    y=x;
    if(z->key < x->key) x=x->le;
    else x=x->ri;
  }
  z->pa=y;
  if(y==NIL) ro=z;
  else if(z->key < y->key)y->le=z;
  else y->ri=z;
}

void pre(struct Node *ro){
  if(ro==NIL) return;
  printf(" %d",ro->key);
  pre(ro->le);
  pre(ro->ri);
}

void ino(struct Node *ro){
  if(ro==NIL) return;
  ino(ro->le);
  printf(" %d",ro->key);
  ino(ro->ri);
}

struct Node * find(struct Node *x,int buf){
  while(x!=NIL&&buf!=x->key){
    if(buf < x->key) x=x->le;
    else x=x->ri;
  }
  return x;
}

