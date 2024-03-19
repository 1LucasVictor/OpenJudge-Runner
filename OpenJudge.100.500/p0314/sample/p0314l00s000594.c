#include<stdio.h>
#define N -1
typedef struct{
  int p,left,right;
}node;
void pre(node *u,int total){
  if(total == N) return;
  printf(" %d",total);
  pre(u,u[total].left); pre(u,u[total].right);
}
void in(node *u,int total){
  if(total == N) return;  in(u,u[total].left);
  printf(" %d",total);
  in(u,u[total].right);
}
void post(node *u,int total){
  if(total == N) return;
  post(u,u[total].left); post(u,u[total].right);
  printf(" %d",total);
}
int main(){
  node u[30];
  int total,id,left,right,i;
    scanf("%d",&total);
  for(i=0;i<total;i++) u[i].p = u[i].left = u[i].right = N;
  for(i=0;i<total;i++){
    scanf("%d%d%d",&id,&left,&right);
    u[id].left = left; u[id].right = right; u[left].p = u[right].p = id;
  }
  id = 0;
  while(u[id].p != N) id = u[id].p;
  printf("Preorder\n");
  pre(u,id);
  printf("\n");
  printf("Inorder\n");
  in(u,id);
  printf("\n");
  printf("Postorder\n");
  post(u,id);
  printf("\n");
return 0;
}
