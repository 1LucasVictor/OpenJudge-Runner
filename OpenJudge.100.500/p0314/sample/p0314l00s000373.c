#include <stdio.h>
#include <stdlib.h>

#define NIL -1

typedef struct{
  int p;
  int l;
  int r;
} node;


void print(node *, int);
int preParse(node *, int);
int inParse(node *, int);
int postParse(node *, int);


int n;

int main(){
  node u[26];
  int id, c, l, r = 0;
  int i, j;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    u[i].p = NIL;
    u[i].l = NIL;
    u[i].r = NIL;
  }

  for(i = 0; i < n; i++){
    scanf("%d", &id);

    for(j = 0; j < 2; j++){
      scanf("%d", &c);
      if(j == 0) u[id].l = c;

      else u[id].r = c;

      l = c;
      if(l >= 0) u[c].p = id; 
    }
  }

  for(i = 0; i < n; i++){
    if(u[i].p == NIL) r = i;
  }

  print(u, r);
  
  return 0;
}


void print(node *u, int r){
  printf("Preorder\n");
  preParse(u, r);
  printf("\n");
  
  printf("Inorder\n");
  inParse(u, r);
  printf("\n");
  
  printf("Postorder\n");
  postParse(u, r);  
  printf("\n");
}


int preParse(node *u, int r){
  if(r == NIL) return NIL;
  
  printf(" %d", r);
  preParse(u, u[r].l);
  preParse(u, u[r].r);
}


int inParse(node *u, int r){
  if(r == NIL) return NIL;
  
  inParse(u, u[r].l);

  printf(" %d", r);
  
  inParse(u, u[r].r);
}


int postParse(node *u, int r){
  if(r == NIL) return NIL;
  
  postParse(u, u[r].l);
  postParse(u, u[r].r);

  printf(" %d", r);
}




