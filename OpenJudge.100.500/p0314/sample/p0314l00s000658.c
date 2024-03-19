#include <stdio.h>
#define MAX 25
#define NIL -1
struct Node_struct{int p, l, r;}; /*p: 親(parent), l: 一番左の子(left child), r:右の兄弟(right sibling)*/

typedef struct Node_struct Node;

Node T[MAX];
int D[MAX];
int H[MAX];
int De[MAX];
int S[MAX];

void print(int u){
  int i, c;
  printf("node %d: parent = %d, sibling = %d, degree = %d, depth = %d, height = %d, ", u,T[u].p,S[u],De[u],D[u],H[u]);

  if(T[u].p == NIL) printf("root");
  else if(T[u].l == NIL && T[u].r == NIL) printf("leaf");
  else printf("internal node");
  printf("\n");
}

void calcDepth(int u, int p){
  D[u] = p;
  
  if(T[u].l != NIL) calcDepth(T[u].l, p+1);
  if(T[u].r != NIL) calcDepth(T[u].r, p+1);
}

int calcHeight(int u){
  int r,l;
  r = l = 0;
  
  if(T[u].l == NIL && T[u].r == NIL) {
    H[u] = 0;
    return 0;
  }
  
  if(T[u].r != NIL) 
    r = calcHeight(T[u].r) + 1;
  if(T[u].l != NIL)
    l = calcHeight(T[u].l) + 1;
  
  if(l > r) {
    H[u] = l;
    return l;
  }
  else {
    H[u] = r;
    return r;
  } 
}

void calcDegree(int u){
  if(T[u].r != NIL) {
    De[u]++;
    calcDegree(T[u].r);
  }
  if(T[u].l != NIL) {
    De[u]++;
    calcDegree(T[u].l);
  }
}

void calcSibling(int u){ 
    S[T[u].r] = T[u].l;
    S[T[u].l] = T[u].r;
}

void preorder(int u) {
  if(u == NIL)
    return;

  printf(" %d",u);
  preorder(T[u].l);
  preorder(T[u].r);
}

void inorder(int u) {
  if(u == NIL)
    return;
 
  inorder(T[u].l);
  printf(" %d",u);
  inorder(T[u].r);
}

void postorder(int u) {
  if(u == NIL)
    return;
 
  postorder(T[u].l);
  postorder(T[u].r);
  printf(" %d",u);
}
  
int main(){
  int i, j;
  int n;
  int id, sib, child;
  int root = NIL;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    T[i].p = T[i].l = T[i].r = NIL;
    S[i] = NIL; 
  }
  
  for(i=0; i<n; i++){
    scanf("%d",&id);

    for(j = 0; j<2; j++){ //子を入力する (input children)
      scanf("%d", &child);
      T[child].p = id;
      if(j == 0) T[id].l = child; //idの一番左の子 (the most left child of id)
      else {
	T[id].r = child;
	calcSibling(id);
      }  
     
    }
  }

  //根を求める (find the root)
  for(i=0; i<n; i++){
    if(T[i].p == NIL ) root = i;
  }
  
  //それぞれのノードの深さを求める (find depth of each node)
  printf("Preorder\n");
  preorder(root);
  printf("\n");

  printf("Inorder\n");
  inorder(root);
  printf("\n");

  printf("Postorder\n");
  postorder(root);
  printf("\n");


  return 0;
}

