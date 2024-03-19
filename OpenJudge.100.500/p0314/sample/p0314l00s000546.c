#include<stdio.h>
   
typedef struct{
   
  int parent;
     
  int left;
 
  int right;
 
}Node;
 
Node N[30];
 
void output1(int x);
void output2(int x);
void output3(int x);
 
int main(){
   
  int i, n, a;
 
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){ 
    
    N[i].parent = -1;
 
  }
  
  for(i = 0; i < n; i++){
     
    scanf("%d", &a);
 
    scanf("%d %d", &N[a].left, &N[a].right);
 
    if(N[a].left != -1) 
      N[N[a].left].parent = a;
 
    if(N[a].right != -1) 
      N[N[a].right].parent = a;
 
  }
  
  int root;
 
  for(i = 0; i < n; i++){
    if(N[i].parent == -1){
 
      root = i;
 
      break;
 
    }
  }
 
  printf("Preorder\n");
 
  output1(root);
    
  printf("\nInorder\n");
 
  output2(root);
 
  printf("\nPostorder\n");
 
  output3(root);
 
  printf("\n");
 
  return 0;
}
 
void output1(int x){
 
  if(x == -1)
    return;
 
  printf(" %d", x);
   
  output1(N[x].left);
 
  output1(N[x].right);
 
}
  
void output2(int x){
 
  if(x == -1)
    return;
 
  output2(N[x].left);
 
  printf(" %d", x);
 
  output2(N[x].right);
 
}
  
void output3(int x){
 
  if(x == -1)
    return;
 
  output3(N[x].left);
 
  output3(N[x].right);
 
  printf(" %d", x);
 
}