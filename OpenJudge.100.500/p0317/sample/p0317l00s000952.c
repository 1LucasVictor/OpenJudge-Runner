#include<stdio.h>
#include<stdlib.h>

#define NIL -1
#define MAX 500001

typedef struct{
  int right;
  int left;
  int key;
} Node;

void Insert(Node*,int,int);
void PreOrder(Node*,int);
void InOrder(Node*,int);
void Find(Node*,int, int);

int main(void){
  int i, n, k, f, count=0;
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

    }
  }
  return 0;
}

void Insert(Node *T,int count, int k){
  int x, y;

  T[count].key = k;
  T[count].left = NIL;
  T[count].right = NIL;

  if(count == 0) return;

  x = 0;
  while(x!=NIL){
    y = x;

    if(k < T[x].key) x = T[x].left;
    else x = T[x].right;

  }

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