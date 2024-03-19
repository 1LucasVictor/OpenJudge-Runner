#include<stdio.h>

#define NIL -1
#define MAX 500001

struct node{
  int left;
  int right;
  int key;
};
int count, root = NIL;

void Find(struct node*, int);
void Insert(struct node*, int);
void Delete(struct node*, int);
int Alsearch(struct node*, int);
void Dispm(struct node*, int);
void Dispp(struct node*, int);

int main(void)
{
  struct node table[MAX];
  int i, n, data;
  char command[8];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%*c%s", command);
    if (command[0] == 'f') {
      scanf("%d", &data);
      Find(table, data);
    } else if (command[0] == 'i') {
      scanf("%d", &data);
      Insert(table, data);
    } else if (command[0] == 'd') {
      scanf("%d", &data);
      Delete(table, data);
    }else if (command[0] == 'p') {
      Dispp(table, root);
      putchar('\n');
      Dispm(table, root);
      putchar('\n');
    }
  }
  return 0;
}
void Find(struct node *table, int key)
{
  int u = root;
  while (u != NIL) {
    if (table[u].key == key) {
      printf("yes\n");
      return;
    } else if (table[u].key > key) {
      u = table[u].left;
    } else {
      u = table[u].right;
    }
  }
  printf("no\n");
}
void Insert(struct node *table, int key)
{
  int parent = NIL, u = root;
  while (u != NIL) {
    parent = u;
    if(table[u].key == key) {
      printf("error\n");
      return;
    } else if (table[u].key > key) {
      u = table[u].left;
    }else {
      u = table[u].right;
    }
  }
  table[count].key = key;
  table[count].left = table[count].right = NIL;
  if (parent == NIL) {
    root = count++;
  } else if(table[parent].key > key) {
    table[parent].left = count++;
  } else {
    table[parent].right = count++;
  }
}
void Delete(struct node *table, int key)
{
  int u = root, del, parent = NIL;
  while (u != NIL && table[u].key != key) {
    parent = u;
    if (table[u].key > key) {
      u = table[u].left;
    } else {
      u = table[u].right;
    }
  }
  if (u == NIL) {
    printf("error\n");
    return;
  }
  if (parent == NIL) {
    root = NIL;
    return;
  }else if (table[u].left == NIL) {
    if (table[parent].left == u) {
      table[parent].left = table[u].right;
    }else {
      table[parent].right = table[u].right;
    }
  } else if (table[u].right == NIL) {
    if (table[parent].left == u) {
      table[parent].left = table[u].left;
    }else {
      table[parent].right = table[u].left;
    }
  } else {
    if (table[parent].left == u) {
      del = Alsearch(table, u);
      table[parent].left = del;
    }else {
      del = Alsearch(table, u);
      table[parent].right = del;
    }
    table[del].left = table[u].left;
    table[del].right = table[u].right;
  }
}
int Alsearch(struct node *table, int u)
{
  int parent = u;
  u = table[u].right;
  while (table[u].left != NIL) {
    parent = u;
    u = table[u].left;
  }
  if (table[parent].left == u) table[parent].left = table[u].right;
  else table[parent].right = table[u].right;
  return u;
}
void Dispm(struct node *table, int u)
{
  if (u == NIL) return;
  printf(" %d", table[u].key);
  Dispm(table, table[u].left);
  Dispm(table, table[u].right);
}
void Dispp(struct node *table, int u)
{
  if (u == NIL) return;
  Dispp(table, table[u].left);
  printf(" %d", table[u].key);
  Dispp(table, table[u].right);
}
