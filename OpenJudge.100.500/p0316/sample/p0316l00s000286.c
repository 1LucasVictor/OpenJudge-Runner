#include <stdio.h>
#include <stdlib.h>
#define NIL -1

typedef struct{
  int k;
  int l;
  int r;
} Node;

void insert(Node *T, int index, int key){

  int x = 0;
  int y;

  T[index].k = key;
  T[index].l = NIL;
  T[index].r = NIL;

  if( index == 0 ){
    return;
  }

  while( x != NIL ){
    y = x;

    if( key < T[x].k ){
      x = T[x].l;
    }else{
      x = T[x].r;
    }

  }

  if( key < T[y].k ){
      T[y].l = index;
    }else{
      T[y].r = index;
    }

}

void pre(Node *T, int u){

  if( u == NIL ){
    return;
  }

  printf(" %d",T[u].k);
  pre(T,T[u].l);
  pre(T,T[u].r);

}

void ino(Node *T, int u){

  if( u == NIL ){
    return;
  }

  ino(T,T[u].l);
  printf(" %d",T[u].k);  
  ino(T,T[u].r);

}


int main(){

  int i;
  int n;
  char order[8];
  Node *T;
  int index = 0;
  int key;

  scanf("%d",&n);

  T = malloc(sizeof(Node)*n);

  for( i = 0 ; i < n ; i++ ){

    scanf("%s",order);

    if( order[0] == 'i' ){
      scanf("%d",&key);
      insert(T,index,key);
      index++;
      
    }else if( order[0] == 'p' ){

      if( index > 0 ){

        ino(T,0);
        printf("\n");
        pre(T,0);
        printf("\n");

      }

    }

  }

  return 0;
}