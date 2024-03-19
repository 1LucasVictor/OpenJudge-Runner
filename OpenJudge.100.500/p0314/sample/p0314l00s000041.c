#include <stdio.h>

#define MAX 100
#define NIL -1


typedef struct {
  int parent;
  int left;
  int right;
}Tree;

Tree T[MAX];
int n;

void preOrder(int);
void inOrder(int);
void postOrder(int);

int main(){
  int i;
  int left,right,root;
  int a;

scanf("%d",&n);
for(i=0;i<n;i++){
  T[i].parent=NIL;
}
for(i=0;i<n;i++){
  scanf("%d%d%d",&a,&left,&right);
  T[a].left=left;
  T[a].right=right;
  if(left!=NIL)T[left].parent=a;
  if(right!=NIL)T[right].parent=a;
}

for(i=0;i<n;i++){
  if(T[i].parent==NIL)root=i;
}


printf("Preorder\n");
preOrder(root);
printf("\n");
printf("Inorder\n");
inOrder(root);
printf("\n");
printf("Postorder\n");
postOrder(root);
printf("\n");

return 0;

}


void preOrder(int u){
  if(u==NIL)return ;
  printf(" %d",u);
  preOrder(T[u].left);
  preOrder(T[u].right);
}


void inOrder(int u){
  if(u==NIL)return ;
  inOrder(T[u].left);
  printf(" %d",u);
  inOrder(T[u].right);
}


void postOrder(int u){
  if(u==NIL)return ;
  postOrder(T[u].left);
  postOrder(T[u].right);
  printf(" %d",u);
}