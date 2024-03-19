#include <stdio.h>
#define MAX 10000

struct node{

int p, q, r;
};
struct node T[MAX];
int n;


void preorder(int t){

if(t == -1) return;
  printf(" %d",t);
  preorder(T[t].q);
  preorder(T[t].r);
}

void inorder(int t){
  if(t == -1) return;
  inorder(T[t].q);
  printf(" %d",t);
  inorder(T[t].r);
}

void post(int t){
  if(t == -1) return;
  post(T[t].q);
  post(T[t].r);
  printf(" %d",t);
}


int main(){
  int i, v, q, r, root;

  scanf("%d", &n);
   for(i = 0; i < n; i++) T[i].p = -1;
 

  for(i = 0; i < n; i++){
   scanf("%d %d %d", &v, &q, &r);
    T[v].q = q;
    T[v].r = r;
    if(q != -1) T[q].p = v;
    if(r != -1) T[r].p = v;
  }

  for(i = 0; i < n; i++)
    if(T[i].p == -1) root = i;
  printf("Preorder\n");
  preorder(root);
  printf("\n");
  printf("Inorder\n");
  inorder(root);
  printf("\n");
  printf("Postorder\n");
  post(root);
  printf("\n");

  return 0;
}