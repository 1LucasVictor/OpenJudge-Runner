#include <stdio.h>
#define NIL -1

struct node{
  int parent, left, right;
};
struct node t[25];

void preorder(int);
void inorder(int);
void postorder(int);

int main(){

  int n, vec, left ,right, root;
  int i;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    t[i].parent =t[i].left =t[i].right = NIL;
  }

  for(i=0; i<n; i++){
    scanf("%d %d %d", &vec, &left, &right);

    t[vec].left=left; t[vec].right=right;

    if(left!=NIL) t[left].parent=vec;
    if(right!=NIL) t[right].parent=vec;
  }
  for(i=0; i<n; i++){
    if(t[i].parent == NIL) root=i;
  }
  printf("Preorder\n");
  preorder(root);
  printf("\nInorder\n");
  inorder(root);
  printf("\nPostorder\n");
  postorder(root);
  printf("\n");
  
  return 0;

}
void preorder(int x){
  if(x==NIL) return;

  printf(" %d", x);
  preorder(t[x].left);
  preorder(t[x].right);

}
void inorder(int x){
  if(x==NIL) return ;

  inorder(t[x].left);
  printf(" %d", x);
  inorder(t[x].right);
}
void postorder(int x){
  if(x==NIL) return ;

  postorder(t[x].left);
  postorder(t[x].right);
  printf(" %d", x);
}

