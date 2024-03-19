#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tree{
  int ki;
  struct tree *right,*left,*parent;
};

struct tree *root,*nil;

void insert(int);
void inwalk(struct tree *);
void prwalk(struct tree *);
struct tree * find(struct tree*,int);

void insert(int k)
{
  struct tree *a=root,*b=nil,*c;

  c = (struct tree *)malloc(sizeof(struct tree));
  c->ki = k;
  c->left = nil;
  c->right = nil;

  while(a!=nil) {
    b = a;
    if(c->ki < a->ki) {
      a = a->left;
    }else{
      a = a->right;
    }
  }

  c->parent = b;
  if(b == nil) {
    root = c;
  }else{
    if(c->ki < b->ki) {
      b->left = c;
    }else{
      b->right = c;
    }
  }
}

void inwalk(struct tree *x)
{
  if(x == nil)
    return;
  inwalk(x->left);
  printf(" %d",x->ki);
  inwalk(x->right);
}

void prwalk(struct tree *y)
{
  if(y == nil)
    return;
  printf(" %d",y->ki);
  prwalk(y->left);
  prwalk(y->right);
}

struct tree * find(struct tree *z,int k)
{
  while(z != nil && k != z->ki) {
    if(k < z->ki) {
      z = z->left;
    }else{
      z = z->right;
    }
  }
    return z;
}

int main()
{
  int m,k,i;
  char ins[10];

  scanf("%d",&m);

  for(i=0;i<m;i++) {
    scanf("%s",ins);
    if(ins[0] == 'f') { /*f = find*/
      scanf("%d",&k);
      struct tree *t = find(root,k);
      if(t != nil) {
	printf("yes\n");
      }else{
	printf("no\n");
      }
    }else if(ins[0] == 'i') { /*i = insert*/
      scanf("%d",&k);
      insert(k);
    }else if(ins[0] == 'p') { /*p = print*/
      inwalk(root);
      printf("\n");
      prwalk(root);
      printf("\n");
    }
  }

  return 0;
}

