#include<stdio.h>
#define MAX 25
#define NIL -1

typedef struct{
  int parent;
  int left;
  int right;
}node;

void preParse(int);
void inParse(int);
void postParse(int);

node t[MAX];

int main(){
  int n, index, root;
  int i;

  scanf("%d", &n);

  //初期化
  for(i=0;i<n;i++){
    t[i].parent = NIL;
  }
  
  for(i=0;i<n;i++){
    scanf("%d", &index);
    scanf("%d %d", &t[index].left, &t[index].right);
    //右の子と左の子の親を設定
    if(t[index].left != NIL) t[t[index].left].parent = index; 
    if(t[index].right != NIL) t[t[index].right].parent = index;
  }

  for(i=0;i<n;i++){
    if(t[i].parent == NIL) root = i;
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

void preParse(int u){
  if(u == NIL) return;
  printf(" %d", u);
  preParse(t[u].left);
  preParse(t[u].right);
}

void inParse(int u){
  if(u == NIL) return;
  inParse(t[u].left);
  printf(" %d", u);
  inParse(t[u].right);
}

void postParse(int u){
  if(u == NIL) return;
  postParse(t[u].left);
  postParse(t[u].right);
  printf(" %d", u);
}

