#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct tree{
  int ki;
  struct tree *right,*left,*parent;
}tree;

tree *root,*nil;

tree* minimum(tree *);
tree * find(tree*,int);
tree* success(tree *);
void delete(tree *);
void insert(int);
void inwalk(tree *);
void prwalk(tree *);

tree* minimum(tree *a)
{
  while(a->left != nil)
    a = a->left;
  return a;
}

tree * find(tree *z,int k)
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

tree* success(tree *b)
{
  if(b->right != nil)
    return minimum(b->right);
  tree *B = b->parent;
  while(B != nil && b == B->right) {
    b = B;
    B = B->parent;
  }
  return B;
}

void delete(tree *f)
{
  tree *d;
  tree *c;

  if(f->left == nil || f->right == nil)
    d = f;
  else
    d = success(f);

  if(d->left != nil) {
    c = d->left;
  }else{
    c = d->right;
  }

  if(c != nil) {
    c->parent = d->parent;
  }

  if(d->parent == nil) {
    root = c;
  }else{
    if(d == d->parent->left) {
      d->parent->left = c;
    }else{
      d->parent->right = c;
    }
  }

  if(d != f) {
    f->ki = d->ki;
  }

  free(d);
}


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

void inwalk(tree *x)
{
  if(x == nil)
    return;
  inwalk(x->left);
  printf(" %d",x->ki);
  inwalk(x->right);
}

void prwalk(tree *y)
{
  if(y == nil)
    return;
  printf(" %d",y->ki);
  prwalk(y->left);
  prwalk(y->right);
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
      tree *t = find(root,k);
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
    }else if(ins[0] == 'd') {
      scanf("%d",&k);
      delete(find(root,k));
    }
  }

  return 0;
}

