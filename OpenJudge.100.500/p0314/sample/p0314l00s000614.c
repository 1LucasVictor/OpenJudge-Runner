#include <stdio.h>
  
#define MAX 100000
#define N -1
  
struct Node{
  int y; 
  int l; 
  int r; 
};

void preorder(int);
void inorder(int);
void postorder(int);

 
struct Node T[MAX];
  
int main(){
  int i,j,a,b,n;
  
  scanf("%d",&n); 
  
  for(i=0;i<n;i++){
    T[i].y=N;
    T[i].l=N;
    T[i].r=N;
  }
  
  for(i=0;i<n;i++){
    scanf("%d",&a); 
  
    for(j=0;j<2;j++){
      scanf("%d",&b); 
  
      if(j==0){
    T[a].l=b;  
      } else {
    T[a].r=b;
      }
    T[b].y=a;       
    }
  }
  
  for(i=0;i<n;i++){
    if(T[i].y==N){
      a=i;
      break;
    }
  }
  
  printf("Preorder\n");
  preorder(a);
  printf("\nInorder\n");
  inorder(a);
  printf("\nPostorder\n");
  postorder(a);
  printf("\n");
   
  return 0;
}

void preorder(int x){
  
  printf(" %d",x);
  if(T[x].l!=N) preorder(T[x].l);
  if(T[x].r!=N) preorder(T[x].r);
  
}
  
void inorder(int y){
  
  if(T[y].l!=N) inorder(T[y].l);
  printf(" %d",y);
  if(T[y].r!=N) inorder(T[y].r);
}
  
void postorder(int z){ 
   
  if(T[z].l!=N) postorder(T[z].l);
  if(T[z].r!=N) postorder(T[z].r);
  printf(" %d",z);
  
}
 