#include<stdio.h>
#include<stdlib.h>
#define LEN 7

struct node{
  int key;
  struct node *parent, *left, *right;
};

typedef struct node node;
typedef struct node * nodepointer;

void insert(int);
void inorder(nodepointer);
void preorder(nodepointer);
nodepointer find(int);
void delete(nodepointer);
nodepointer getSuccessor(nodepointer);
nodepointer getMinimum(nodepointer);

nodepointer root;

int main(){
  int n, k;
  int i;
  char com[LEN];

  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf(" %s", com);
    if(com[0] == 'i'){
      scanf("%d", &k);
      insert(k);
    }
    else if(com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(com[0] == 'f'){
      scanf("%d", &k);
      if(find(k) == NULL) printf("no\n");
      else printf("yes\n");
    }
    else{
      scanf("%d", &k);
      if(find(k) != NULL) delete(find(k));
    }
  }

  return 0;
}

void insert(int k){
  nodepointer x, y, z; //zが新しく挿入するノード

  z = (nodepointer)malloc(sizeof(node));
  //zの設定　zは葉だからleft,rightはnullでok
  z -> key = k;
  z -> left = NULL;
  z -> right = NULL;

  x = root; //たどる際のスタートは根
  y = NULL; //yはxの親
  //xがnullになるまでたどる。このときyはxの直前のノード、つまりxの親であり葉ノードである。
  while(x != NULL){
    y = x;
    if(z -> key < x -> key) x = x -> left;
    else x = x -> right;
  }
  z -> parent = y;

  //rootがnullのときwhile回らずにyはnullのまま
  //つまり、木が空っぽのときyはnull
  if(y == NULL) root = z;
  else if(z -> key < y -> key) y -> left = z;
  else y -> right = z;
}

void inorder(nodepointer n){
  if(n == NULL) return;
  inorder(n -> left);
  printf(" %d", n -> key);
  inorder(n -> right);
}

void preorder(nodepointer n){
  if(n == NULL) return;
  printf(" %d", n -> key);
  preorder(n -> left);
  preorder(n -> right);
}

nodepointer find(int k){
  nodepointer n;
  n = root;
  while(n != NULL && n -> key != k){
    if(k < n -> key) n = n -> left; //nのkeyの方が大きければ探したいkeyは左にある
    else n = n -> right; //nのkeyの方が小さければ探したいkeyは右にある
  }
  return n;
}

void delete(nodepointer z){
  nodepointer x, y; //yを削除するノードとする
  if(z -> left != NULL && z -> right != NULL) y = getSuccessor(z); //zの子2つ
  else y = z; //zの子1or0

  //yの子xを決める
  //子がいないときはxにNULLが入る
  if(y -> left != NULL) x = y -> left; //yに左の子がいればxを左の子に
  else x = y -> right; //yに右の子がいればxを右の子に

  //xの親を設定
  if(x != NULL) x -> parent = y -> parent;

  //yが根のときxを根に設定
  if(y -> parent == NULL) root = x;

  //yが左の子ならxも左の子に
  else if(y == y -> parent -> left) y -> parent -> left = x;

  //yが右の子ならxも右の子に
  else y -> parent -> right = x;

  //zの次節点が削除されたらyのkeyをzにコピー
  if(y != z) z -> key = y -> key;

  free(y);
}

nodepointer getSuccessor(nodepointer n){
  nodepointer y; //yはnの親

  //右の子がいるとき、右の部分木でキーが最小の節点が次節点
  if(n -> right != NULL) return getMinimum(n -> right);

  //親を辿っていき、『「最初に出てきた左の子である節点」の親』が次節点
  y = n -> parent;
  while(y != NULL && n == y -> right){
    n = y;
    y = y -> parent;
  }

  return y;
}

//ひたすら左の子を辿れば、nを根とする部分木のなかで最小のキーを持つ節点を見つけられる
nodepointer getMinimum(nodepointer n){
  while(n -> left != NULL) n = n -> left;
  return n;
}

