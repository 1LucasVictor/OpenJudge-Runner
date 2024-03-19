#include<stdio.h>
#include<stdlib.h>
struct tree {
  int data;
  struct tree *left;
  struct tree *right;
};
struct tree *sentinel, *root;
int Search(struct tree*, int);
struct tree *Insert(struct tree*, int);
struct tree *Alsearch(struct tree**);
struct tree *Remove(struct tree**, int);
void Dispm(struct tree*);
void Dispp(struct tree*);
int main(void)
{
  int i, count, key;
  char command[7];
  sentinel = (struct tree*)malloc(sizeof(struct tree));
  root = sentinel;
  scanf("%d", &count);
  for (i = 0; i < count; i++) {
    scanf("%*c%s", command);
    switch (command[0]) {
    case 'f':
      scanf(" %d", &key);
      sentinel -> data = key;
      if (Search(root, key)) {
        printf("yes\n");
      } else {
        printf("no\n");
      }
      break;
    case 'i':
      scanf(" %d", &key);
      sentinel -> data = key;
      root = Insert(root, key);
      break;
    case 'd':
      scanf(" %d", &key);
      sentinel -> data = key;
      Remove(&root, key);
      break;
    case 'p':
      Dispm(root);
      putchar('\n');
      Dispp(root);
      putchar('\n');
      break;
    }
  }
  return 0;
}
int Search(struct tree *p, int key)
{
  if (p -> data > key) {
    return Search(p -> left, key);
  } else if (p -> data < key){
    return Search(p -> right, key);
  }
  if (p == sentinel) return 0;
  else return 1;
}
struct tree *Insert(struct tree *p, int key)
{
  struct tree *q;
  if (p -> data > key) {
    p -> left = Insert(p -> left, key);
  } else if (p -> data < key) {
    p -> right = Insert(p -> right, key);
  }
  else {
    q = (struct tree*)malloc(sizeof(struct tree));
    q -> data = key;
    q -> left = sentinel;
    q -> right = sentinel;
    return q;
  }
  return p;
}
struct tree *Alsearch(struct tree **p)
{
  if ((*p) -> left == sentinel) {
    struct tree *tmp = *p;
    *p = (*p) -> right;
    return tmp;
  } else {
    return Alsearch(&(*p) -> left);
  }
}

struct tree *Remove(struct tree **p, int key)
{
  if ((*p) -> data > key) {
    (*p) -> left = Remove(&(*p) -> left, key);
  } else if ((*p) -> data < key) {
    (*p) -> right = Remove(&(*p) -> right, key);
  } else {
    struct tree *tmp = *p;
    if (*p == sentinel) return sentinel;
    if ((*p) -> right == sentinel) {
      *p = (*p) -> left;
      free(tmp);
    }else if ((*p) -> left == sentinel) {
      *p = (*p) -> right;
      free(tmp);
    } else {
      struct tree *alter = Alsearch(&(*p) -> right);
      alter -> left = (*p) -> left;
      alter -> right = (*p) -> right;
      *p = alter;
      free(tmp);
    }
  }
  return *p;
}
void Dispm(struct tree *p)
{
  if (p != sentinel) {
    Dispm(p -> left);
    printf(" %d", p -> data);
    Dispm(p -> right);
  }
}
void Dispp(struct tree *p)
{
  if (p != sentinel) {
    printf(" %d", p -> data);
    Dispp(p -> left);
    Dispp(p -> right);
  }
}
