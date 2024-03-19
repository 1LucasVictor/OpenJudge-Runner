#include <stdio.h>
#define N 25
#define NE -1

struct node{
  int id;
  int left;
  int right;
};

struct node tree[N];

void Pre(int);
void In(int);
void Post(int);

int main(){

  int i, n, num, left, right, root, p[N];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    p[i]=0;
  }

  for(i=0;i<n;i++){
    scanf("%d %d %d", &num, &left, &right);
    tree[num].id=num;
    tree[tree[num].id].left=left;
    tree[tree[num].id].right=right;
    if(left!=NE) p[tree[num].left]=1;
    if(right!=NE) p[tree[num].right]=1;
  }
  
  for(i=0;i<n;i++){
    if(p[i]==0) root=i;
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
    
void Pre(int id){
  if(id==NE) return;
  
  else{
    printf(" %d",id);
    Pre(tree[id].left);
    Pre(tree[id].right);
  }
}


void In(int id){
  if(id==NE) return;
  else{
    In(tree[id].left);
    printf(" %d", id);
    In(tree[id].right);
  }
}

void Post(int id){
  if(id==NE) return;
  else{
    Post(tree[id].left);
    Post(tree[id].right);
    printf(" %d", id);
  }
}

  


