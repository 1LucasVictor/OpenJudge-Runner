#include<stdio.h>

typedef struct{
  int id;
  int left;
  int right;
}Tree;

void preParse(int);
void inParse(int);
void postParse(int);

int n;
Tree T[100];

int main()
{
  int i, v, l, r, root;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    T[i].id = -1;
  }

  for(i = 0; i < n; i++){
    scanf("%d %d %d", &v, &l, &r);
    T[v].left = l;
    T[v].right = r;
    if(l != -1) T[l].id = v;
    if(r != -1) T[r].id = v;
  }

  for(i = 0; i < n; i++) if(T[i].id == -1) root = i;

  printf("Preorder\n");
  preParse(root);
  printf("\n");

  printf("Inorder\n");
  inParse(root);
  printf("\n");

  printf("Postorder\n");
  postParse(root);
  printf("\n");

  return 0;
}

void preParse(int u)
{

  int i=0;

  if(u != -1){
    printf(" %d", u);
    preParse(T[u].left);
    preParse(T[u].right);
  }
}

void inParse(int u)
{

  if(u != -1){
    inParse(T[u].left);
    printf(" %d", u);
    inParse(T[u].right);
  }
}

void postParse(int u)
{

  if(u != -1){
    postParse(T[u].left);
    postParse(T[u].right);
    printf(" %d", u);
  }
}