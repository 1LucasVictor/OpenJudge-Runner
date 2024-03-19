#include<stdio.h>
#include<stdlib.h>
#define MAX 10000
#define NIL -1



struct Node{
  int p, l, r;
};

struct Node T[MAX];
int n;

void preO(int );
void inO(int );
void postO(int );

void preO(int u){
  if( u == NIL ) return;
  printf(" %d", u);
  preO(T[u].l);
  preO(T[u].r);
}

void inO(int u){
  if( u == NIL) return;
  inO(T[u].l);
  printf(" %d", u);
  inO(T[u].r);
}

void postO(int u){
  if( u == NIL ) return;
  postO(T[u].l);
  postO(T[u].r);
  printf(" %d", u);
}

int main(){
  int i, d, a, l, r;
  scanf("%d", &n);
  for(i = 0 ; i < n ; i++) T[i].p = NIL;

  for( i = 0 ; i < n ; i++){
    scanf("%d", &a);
    scanf("%d", &l);
    scanf("%d", &r);
    T[a].l = l;
    T[a].r = r;

    if(l != NIL ) T[l].p = a;
    if(r != NIL ) T[r].p = a;
  }
for( i = 0 ; i < n ; i++){
    if( T[i].p == NIL ) d = i;
  }

  printf("Preorder\n");
  preO(d);
  printf("\n");
  printf("Inorder\n");
  inO(d);
  printf("\n");
  printf("Postorder\n");
  postO(d);
  printf("\n");

  return 0;
}

