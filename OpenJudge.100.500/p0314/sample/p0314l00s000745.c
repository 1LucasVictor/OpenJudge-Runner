#include <stdio.h>
#include <stdlib.h>

int Sibling(int);
int degree(int);
int Depth(int);
int height(int);

void inorder(int);
void preorder(int);
void postorder(int);

typedef struct{
  int id;
  int parent;
  int left;
  int right;
}tree;

tree *TREE;

int N;

#define fr -1

int main(){
  int id,i,j,de,depth,ro,l,r;

  scanf("%d",&N);
  TREE = (tree *)malloc(sizeof(tree)*N);

  for(i=0;i<N;i++){
    //TREE[i].id = fr;
    TREE[i].parent = fr;
    //TREE[i].left = fr;
    //TREE[i].right = fr;
  }


  for(i=0;i<N;i++){
     scanf("%d %d %d",&j,&l,&r);
     TREE[j].id=j;
     TREE[j].left = l;
     TREE[j].right = r;
     if(TREE[j].left!=fr){
       TREE[TREE[j].left].parent = TREE[j].id;
     }

     if(TREE[j].right!=fr){
       TREE[TREE[j].right].parent = TREE[j].id;

     }
   }

  for(i=0;i<N;i++){
    if(TREE[i].parent == fr)ro = i;
  }


  printf("Preorder\n");
  preorder(ro);

  printf("\nInorder\n");
  inorder(ro);

  printf("\nPostorder\n");
  postorder(ro);


  printf("\n");

  return 0;
}

//Sibling Function!<f>
int Sibling(int id){
  int i;
  for(i=0;i<N;i++){
    if(TREE[id].parent == TREE[i].parent && id != i){
      return i;
    }
  }
  return -1;
}

//degree Function!<f>
int degree(int id){
  int i;
  if(TREE[id].left != -1 && TREE[id].right != -1){
    return 2;
  }
  else if(TREE[id].left != -1 || TREE[id].right != -1){
    return 1;
  }
  else return 0;
}

//depth Function!<f>
int Depth(int id){
  int i = TREE[id].parent;
  int depth = 0;
  while(i!=fr){
    i = TREE[i].parent;
    depth++;
  }
  return depth;
}

//height Function
int height(int id){
  int lheight=0,rheight=0;
  if(TREE[id].left != fr){
    lheight = height(TREE[id].left) + 1;
  }
  if(TREE[id].right != fr){
    rheight = height(TREE[id].right) + 1;
  }
  if(lheight > rheight){
    return lheight;
  }
  else{
    return rheight;
  }
}

void preorder(int x){
  if(x==fr){
    return;
  }
  printf(" %d",x);
  if(TREE[x].left!=-1){
    preorder(TREE[x].left);
  }
  if(TREE[x].right!=-1){
    preorder(TREE[x].right);
  }
}

void inorder(int x){
  if(x==fr){
    return;
  }
  if(TREE[x].left != -1)
  {
    inorder(TREE[x].left);
  }
  printf(" %d",x);
  if(TREE[x].right != -1){
    inorder(TREE[x].right);
  }
}

void postorder(int x){
  if(x==fr){
    return;
  }
  if(TREE[x].left != -1) {
    postorder(TREE[x].left);
  }
  if(TREE[x].right != -1) {
    postorder(TREE[x].right);
  }
  printf(" %d",x);
}