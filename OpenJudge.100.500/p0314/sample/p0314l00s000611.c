#include <stdio.h>
#include <string.h>

#define N 25

typedef struct{
  int left, right;
}Node;

Node tree[N];
int n;
char root[N];

void visit_pre(int p){
  printf(" %d", p);
  if(tree[p].left != -1) visit_pre(tree[p].left);
  if(tree[p].right != -1) visit_pre(tree[p].right);
}

void visit_in(int p){
  if(tree[p].left != -1) visit_in(tree[p].left);
  printf(" %d", p);
  if(tree[p].right != -1) visit_in(tree[p].right);
}

void visit_post(int p){
  if(tree[p].left != -1) visit_post(tree[p].left);
  if(tree[p].right != -1) visit_post(tree[p].right);
  printf(" %d", p);
}
int main(){
  int i, r;
  scanf("%d", &n);
  memset(root, 1, n);
  for(i=0;i<n;i++) tree[i].left = tree[i].right = -1;
  for(i=0;i<n;i++){
    int idx, l, r;
    scanf("%d %d %d", &idx, &l, &r);
    tree[idx].left = l;
    tree[idx].right = r;
    root[l] = root[r] = 0;
  }
  for(i=0;i<n;i++) if(root[i]) r = i;
  printf("Preorder\n");
  visit_pre(r);
  printf("\n");
  printf("Inorder\n");
  visit_in(r);
  printf("\n");
  printf("Postorder\n");
  visit_post(r);
  printf("\n");
  return 0;
}

