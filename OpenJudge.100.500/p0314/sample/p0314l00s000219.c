#include <stdio.h>
#define N 25
#define NIL -1
struct Point {
  int P,L,R;
};
struct Point tree[N];
int n;

void preorder(int st);
void inorder(int st);
void postorder(int st);

int main()
{
  int i,p,l,r,squrt;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    tree[i].P=-1;
  }

  for(i=0;i<n;i++){
    scanf("%d %d %d",&p,&l,&r);
    tree[p].L=l;
    tree[p].R=r;

    if(l!=-1)
      tree[l].P=p;
    
    if(r!=-1)
      tree[r].P=p;
  }

  for(i=0;i<n;i++){
    if(tree[i].P ==-1)
      squrt=i;
  }

  printf("Preorder\n");
  preorder(squrt);
  printf("\n");
    
  printf("Inorder\n");
  inorder(squrt);
  printf("\n");
  
  printf("Postorder\n");
  postorder(squrt);
  printf("\n");

  return 0;
}


void preorder(int st){
  
  if(st==-1)
    return;
  
  printf(" %d",st);

  preorder(tree[st].L);
  preorder(tree[st].R);
  
}

void inorder(int st){
  
  if(st==-1)
    return;
 
  inorder(tree[st].L);
  printf(" %d",st);
  inorder(tree[st].R);
  
}

void postorder(int st){
  
  if(st==-1)
    return;
  
  postorder(tree[st].L);
  postorder(tree[st].R);

  printf(" %d",st);
  
}

