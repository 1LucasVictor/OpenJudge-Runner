#include<stdio.h>

struct Node{
  int Parent;
  int L;
  int R;
};
void preParse(int);
void inParse(int);
void postParse(int);
int n;
struct Node Tree[100001];

int main()
{
  int id,left,right,i,root;

  scanf("%d",&n);

  for(i=0; i<n; i++){
    Tree[i].Parent = -1;
  }

  for(i=0; i<n; i++){
    scanf("%d %d %d",&id,&left,&right);
    if(left != -1){
      Tree[left].Parent = id;
      Tree[id].L = left;
    }
    else
      Tree[id].L = left;

    if(right != -1){
      Tree[right].Parent = id;
      Tree[id].R = right;
    }
    else
      Tree[id].R = right;

  }

  for(i=0; i<n; i++){
   if(Tree[i].Parent == -1)
     root = i;
  }

  printf("Preorder\n");
  preParse(root);
  printf("\nInorder\n");
  inParse(root);
  printf("\nPostorder\n");
  postParse(root);
  printf("\n");

  return 0;
}

void preParse(int u){
  if(u == -1)
    return;
  printf(" %d",u);
  preParse(Tree[u].L);
  preParse(Tree[u].R);
}

void inParse(int u){
  if(u == -1)
    return;
  inParse(Tree[u].L);
  printf(" %d",u);
  inParse(Tree[u].R);
}

void postParse(int u){
  if(u == -1)
    return;
  postParse(Tree[u].L);
  postParse(Tree[u].R);
  printf(" %d",u);
}
  

