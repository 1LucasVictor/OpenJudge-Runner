#include <stdio.h>
#include <stdlib.h>

struct node {
  int id;
  struct node *parent;
  int child_id[2];
  struct node *child[2];
};

struct node *tree;

void preorder(struct node *p);
void inorder(struct node *p);
void postorder(struct node *p);

int main(int argc, char *argv[])
{
  int n, ch, i, j, num;

  scanf("%d", &n);

  tree = (struct node *)malloc(sizeof(struct node) * n);

  for (i = 0; i < n; i++) tree[i].parent = NULL;

  for (i = 0; i < n; i++) {
    scanf("%d", &num);
    tree[num].id = num;

    for (j = 0; j < 2; j++) {
      scanf("%d", &(tree[num].child_id[j]));
      if (tree[num].child_id[j] == -1) tree[num].child[j] = NULL;
      else {
        ch = tree[num].child_id[j];
        tree[num].child[j] = &tree[ch];
        tree[ch].parent = &tree[num];
      }
    }
  }
  printf("Preorder\n");
  preorder(tree);
  printf("\n");
  printf("Inorder\n");
  inorder(tree);
  printf("\n");
  printf("Postorder\n");
  postorder(tree);
  printf("\n");

  return 0;
}

void preorder(struct node *p)
{
  printf(" %d", p->id);
  if (p->child[0] != NULL) preorder(p->child[0]);
  if (p->child[1] != NULL) preorder(p->child[1]);
}

void inorder(struct node *p)
{
  if (p->child[0] != NULL) inorder(p->child[0]);
  printf(" %d", p->id);
  if (p->child[1] != NULL) inorder(p->child[1]);
}

void postorder(struct node *p)
{
  if (p->child[0] != NULL) postorder(p->child[0]);
  if (p->child[1] != NULL) postorder(p->child[1]);
  printf(" %d", p->id);
}