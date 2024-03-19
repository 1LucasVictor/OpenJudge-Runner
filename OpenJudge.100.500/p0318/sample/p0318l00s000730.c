#include<stdio.h>
#include<stdlib.h>

#define NIL -1
#define MAX 500001

typedef struct{
  int right;
  int left;
  int key;
  int parent;
} Node;

void Insert(Node*,int,int);
void PreOrder(Node*,int);
void InOrder(Node*,int);
void Find(Node*,int, int);
void Delete(Node*,int);
int Successor(Node*, int);

int main(void){
  int i, n, k, f, del, count=0;
  char state[8];
  Node T[MAX];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%s", state);

    if(state[0] == 'i'){

      scanf("%d",&k);
      Insert(T, count, k);
      count++;

    } else if(state[0] == 'p'){

      if(count > 0){
        InOrder(T, 0);
        printf("\n");
        PreOrder(T, 0);
        printf("\n");
      }

    } else if(state[0] == 'f'){

      scanf("%d", &f);
      Find(T, f, 0);

    } else if(state[0] == 'd'){

      scanf("%d", &del);
      Delete(T, del);

    }
  }
  return 0;
}

void Insert(Node *T,int count, int k){
  int x, y;

  T[count].key = k;
  T[count].left = NIL;
  T[count].right = NIL;
  //T[count].parent = NIL;

  if(count == 0) return;

  x = 0;
  while(x!=NIL){
    y = x;

    if(k < T[x].key) x = T[x].left;
    else x = T[x].right;

  }

  T[count].parent = y;

  if(k < T[y].key) T[y].left = count;
  else T[y].right = count;

  return;
}

void PreOrder(Node *T, int u){

  if(u == NIL) return;

  printf(" %d", T[u].key);
  PreOrder(T, T[u].left);
  PreOrder(T, T[u].right);

  return;
}

void InOrder(Node *T, int u){

  if(u == NIL) return;

  InOrder(T, T[u].left);
  printf(" %d", T[u].key);
  InOrder(T, T[u].right);

  return;
}

void Find(Node *T, int f, int u){

  if(u == NIL) printf("no\n");
  else if(T[u].key == f) printf("yes\n");
  else if(T[u].key > f && T[u].left != NIL) Find(T, f, T[u].left);
  else Find(T, f, T[u].right);

  return;
}

void Delete(Node *T, int k){
  int x, y, z = 0;

  while(1){
    if(T[z].key == k) break;
    else if(k < T[z].key) z = T[z].left;
    else z = T[z].right;

  }

  if(T[z].left == NIL || T[z].right == NIL) y = z;
  else y = Successor(T, z);

  if(T[y].left != NIL) x = T[y].left;
  else x = T[y].right;

  if(x != -1) T[x].parent = T[y].parent;

  if(T[y].parent != NIL){
    if(y == T[T[y].parent].left) T[T[y].parent].left = x;
    else T[T[y].parent].right = x;
  }

  if(y != z) T[z].key = T[y].key;

  return;

}

int Successor(Node *T,int x){
  int y;

  if(T[x].right != NIL){
    x = T[x].right;
    while(T[x].left != NIL) x = T[x].left;
    return x;
  } else {
    y = T[x].parent;
    while(y != NIL && x == T[y].right){
      x = y;
      y = T[y].parent;
    }
    return y;
  }

}