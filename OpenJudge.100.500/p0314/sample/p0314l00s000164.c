#include <stdio.h>
#define N 25
#define EMPTY -1

typedef struct {
  int parent;
  int left;
  int right;
} Node;

Node node[N];

void preParse(int u){
  if(u == EMPTY) return;
  printf(" %d",u);
  preParse(node[u].left);
  preParse(node[u].right);
}

void inParse(int u){
  if(u == EMPTY) return;
  inParse(node[u].left);
  printf(" %d",u);
  inParse(node[u].right);
}

void postParse(int u){
  if(u == EMPTY) return;
  postParse(node[u].left);
  postParse(node[u].right);
  printf(" %d",u);
}

int main(){
  int i,j,n,l,r,id,root;

  scanf("%d",&n);

  for(i=0; i<n; i++) {
    node[i].left = EMPTY;
    node[i].right = EMPTY;
    node[i].parent = EMPTY;
  }

  for(i=0; i<n; i++){
    scanf("%d%d%d",&id,&l,&r);
    node[id].left = l;
    node[id].right = r;
    if(l != EMPTY) node[l].parent = id;
    if(r != EMPTY) node[r].parent = id;
  }

  for(i=0; i<n; i++) if(node[i].parent == EMPTY) root = i;

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