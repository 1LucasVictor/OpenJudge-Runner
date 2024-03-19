#include <stdio.h>
#define MAX 10001
#define NIL -1

struct Node{
  int p;
  int l;
  int r;
};

struct Node T[MAX];
int n;

void preParse(int u){

  if( u == NIL ){
    return;
  }

  printf(" %d",u);
  preParse(T[u].l);
  preParse(T[u].r);

}

void inParse(int u){

  if( u == NIL ){
    return;
  }

  inParse(T[u].l);
  printf(" %d",u);
  inParse(T[u].r);

}

void postParse(int u){

  if( u == NIL ){
    return;
  }

  postParse(T[u].l);
  postParse(T[u].r);
  printf(" %d",u);
}


int main(int argc, char const *argv[]) {

  int v,l,r;
  int root = 0;
  int i,j;

  scanf("%d",&n);

  for( i = 0 ; i < n ; i++ ){
    T[i].p = T[i].l = T[i].r = NIL;
  }

  for( i = 0 ; i < n ; i++ ){
    scanf("%d %d %d",&v,&l,&r);
    T[v].l = l;
    T[v].r = r;

    if( l != NIL ){
      T[l].p = v;
    }
    if( r != NIL ){
      T[r].p = v;
    }

  }

  for( i = 0 ; i < n ; i++ ){

    if( T[i].p == NIL ){
      root = i;
    }

  }

  printf("Preorder\n");
  preParse(root);
  printf("\n");
  printf("Inorder\n");
  inParse(root);
  printf("\n");
  printf("Postorder\n");
  postParse(root);
  printf("\n");


  return 0;


}