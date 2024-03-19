#include <stdio.h>
#define MAX 100000
#define NIL -1
 
struct Node{
  int parent;
  int left;
  int right;
};

struct Node T[MAX];

void Pre(int);
void In(int);
void Post(int);
 
int main()
{
  int n, k, root, node, child;
  int i, j;
 
  scanf("%d", &n);

  for(i=0; i<n; i++){
    T[i].parent = NIL;
    T[i].left = NIL;
    T[i].right = NIL;
 }
  
 for(i=0; i<n; i++){
   scanf("%d", &node);
   for(j=0; j<2; j++){
     scanf("%d", &child);
     if(child != NIL){
       T[child].parent = node;
       if(j==0) T[node].left = child;
       else T[node].right = child;
     }
   }
 }

 for(i=0; i<n; i++){
   if(T[i].parent == NIL) root = i;
 }

 printf("Preorder\n");
 Pre(root);
 printf("\n");
 printf("Inorder\n");
 In(root);
 printf("\n");
 printf("Postorder\n");
 Post(root);
 printf("\n");

 return 0;
}

void Pre(int root)
{
  printf(" %d", root);
  if(T[root].left != NIL) Pre(T[root].left);
  if(T[root].right != NIL) Pre(T[root].right);
}
 
void In(int root)
{
  if(T[root].left != NIL) In(T[root].left);
  printf(" %d", root);
  if(T[root].right != NIL) In(T[root].right);
}
 
void Post(int root)
{
  if(T[root].left != NIL) Post(T[root].left);
  if(T[root].right != NIL) Post(T[root].right);
  printf(" %d", root);
}