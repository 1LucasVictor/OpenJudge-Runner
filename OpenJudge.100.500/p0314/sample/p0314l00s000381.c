#include <stdio.h>
 
#define MAX 100000
#define N -1
 
struct Node{
  int y; 
  int l; 
  int r; 
};

struct Node T[MAX];

void pre(int uk){
 
  printf(" %d",uk);
  if(T[uk].l!=N) pre(T[uk].l);
  if(T[uk].r!=N) pre(T[uk].r);
 
}
 
void ino(int uk){
 
  if(T[uk].l!=N) ino(T[uk].l);
  printf(" %d",uk);
  if(T[uk].r!=N) ino(T[uk].r);
}
 
void pos(int uk){ 
  
  if(T[uk].l!=N) pos(T[uk].l);
  if(T[uk].r!=N) pos(T[uk].r);
  printf(" %d",uk);
 
}
 
main(){
  int i,j,vo,co,n;
 
  scanf("%d",&n); 
 
  for(i=0;i<n;i++){
    T[i].y=N;
    T[i].l=N;
    T[i].r=N;
  }
 
  for(i=0;i<n;i++){
    scanf("%d",&vo); 
 
    for(j=0;j<2;j++){
      scanf("%d",&co); 
 
      if(j==0){
    T[vo].l=co;  
      } else {
    T[vo].r=co;
      }
    T[co].y=vo;       
    }
  }
 
  for(i=0;i<n;i++){
    if(T[i].y==N){
      vo=i;
      break;
    }
  }
 
  printf("Preorder\n");
  pre(vo);
  printf("\nInorder\n");
  ino(vo);
  printf("\nPostorder\n");
  pos(vo);
  printf("\n");
  
  return 0;
}