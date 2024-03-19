// Tree Walk
#include <stdio.h>

#define MAX 25 // 接点の個数の上限
#define NIL -1 // 番兵(接点番号として使われない値を設定)

struct node{
  int parent; // 接点の親を参照
  int left;   // 左の子を参照
  int right;  // 右の子を参照
};
struct node T[MAX];

// 再帰を使って先行順巡回(Preorder)で表示
void printPreorder(int u){
  if(u == NIL)return;
  printf(" %d", u);
  printPreorder(T[u].left);
  printPreorder(T[u].right);
}

// 再帰を使って中間順巡回(Inorder)で表示
void printInorder(int u){
  if(u == NIL)return;
  printInorder(T[u].left);
  printf(" %d", u);
  printInorder(T[u].right);
}

// 再帰を使って後行順巡回(Postorder)で表示
void printPostorder(int u){
  if(u == NIL)return;
  printPostorder(T[u].left);
  printPostorder(T[u].right);
  printf(" %d", u);
}

int main(){
  int i, n, id, l, r;

  scanf("%d", &n);

  for(i=0; i < n; i++){ // NILを代入して初期化
    T[i].parent = T[i].left = T[i].right = NIL;
  }

  for(i=0; i < n; i++){
    scanf("%d", &id);
    scanf("%d%d", &T[id].left, &T[id].right);
    T[T[id].left].parent = T[T[id].right].parent = id;
  }
  
  i = 0;
  while(1){
    if(T[i].parent == NIL) break;
    i++;
  }
  
  printf("Preorder\n");
  printPreorder(i);
  printf("\nInorder\n");
  printInorder(i);
  printf("\nPostorder\n");
  printPostorder(i);
  printf("\n");
  
  return 0;
}
