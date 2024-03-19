#include <stdio.h>
#include<stdlib.h>
#define MAX 100005
#define N -1

struct Node {int p,l,r;};

struct Node  T[MAX];
int n,D[MAX];

void Pre(int u){
  if(u == N) return;
  printf(" %d",u);
  Pre(T[u].l);
  Pre(T[u].r);
}

void In(int k){
  if(k == N) return;
  In(T[k].l);
  printf(" %d",k);
  In(T[k].r);
}

void Post(int h){
  if(h == N) return;
  Post(T[h].l);
  Post(T[h].r);
  printf(" %d",h);
}

int main(){

  int n,i,j,num,node,nodenum,c,left,right,r,root;

  scanf("%d",&n);
  if(n < 1 || n > 25)exit(1);

  for(i = 0 ; i < n ; i++) T[i].p = N;

  for(i = 0;i < n ; i++){
    scanf("%d %d %d",&node,&left,&right);
    T[node].l = left;
    T[node].r = right;
    if(left != N) T[left].p = node;
    if(right != N) T[right].p = node;

    }

  for(i = 0 ; i < n ; i++) if(T[i].p == N) root = i;

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

