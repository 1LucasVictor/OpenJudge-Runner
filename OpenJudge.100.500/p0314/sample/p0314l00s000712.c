#include<stdio.h>
#include<stdlib.h>
#define MAX 10000
#define NIL -1

struct Node{
  int p,l,r;
};

struct Node T[MAX];
int n;
void preOrder(int );
void inOrder(int );
void postOrder(int );

int main(){
  int i,d,v,l,r;
  scanf("%d", &n);
  for(i = 0 ; i<n; i++){
    T[i].p = NIL;
  }

  for(i = 0; i<n ;i ++){
    scanf("%d", &v);
    scanf("%d", &l);
    scanf("%d", &r);
    T[v].l = l;
    T[v].r = r;
    if(l != NIL) {
      T[l].p = v;
    }
    if(r != NIL){
      T[r].p = v;
    }
  }

    for( i= 0; i<n; i++){
      if(T[i].p == NIL){
	d = i;
      }
    }

    printf("Preorder\n");
    preOrder(d);
    printf("\n");
    printf("Inorder\n");
    inOrder(d);
    printf("\n");
    printf("Postorder\n");
    postOrder(d);
    printf("\n");
    return 0;
  }
  void preOrder(int z){
  if( z == NIL ) return;
  printf(" %d", z);
  preOrder(T[z].l);
  preOrder(T[z].r);
}


void inOrder(int z){
  if( z == NIL) return;
  inOrder(T[z].l);
  printf(" %d", z);
  inOrder(T[z].r);
}

void postOrder(int z){
  if( z == NIL ) return;
  postOrder(T[z].l);
  postOrder(T[z].r);
  printf(" %d", z);
}

