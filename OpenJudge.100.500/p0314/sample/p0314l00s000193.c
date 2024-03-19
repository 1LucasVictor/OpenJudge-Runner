#include <stdio.h>

#define MAX 10000

typedef struct {
  int p;
  int left;
  int right;
} Node;

Node tree[MAX];
int n;

void preparse(int);   /* 先行順巡回 */
void inparse(int);    /* 中間順巡回 */
void postparse(int);  /* 後行順巡回 */

int main()
{
  int i, v, left, right, root;

  scanf("%d", &n);
  for(i=0; i<n; i++) {
    tree[i].p = -1;
  }
  for(i=0; i<n; i++) {
    scanf("%d %d %d", &v, &left, &right);
    tree[v].left = left;
    tree[v].right = right;
    if(left != -1)
      tree[left].p = v;
    if(right != -1)
      tree[right].p = v;
  }
  for(i=0; i<n; i++) {
    if(tree[i].p == -1)
      root = i;
  }

  printf("Preorder\n");
  preparse(root);
  printf("\nInorder\n");
  inparse(root);
  printf("\nPostorder\n");
  postparse(root);
  printf("\n");

  return 0;
}

void preparse(int u)
{
  if(u == -1)
    return ;
  printf(" %d", u);
  preparse(tree[u].left);
  preparse(tree[u].right);
}

void inparse(int u)
{
  if(u == -1)
    return ;
  inparse(tree[u].left);
  printf(" %d", u);
  inparse(tree[u].right);
}

void postparse(int u)
{
  if(u == -1)
    return ;
  postparse(tree[u].left);
  postparse(tree[u].right);
  printf(" %d", u);
}