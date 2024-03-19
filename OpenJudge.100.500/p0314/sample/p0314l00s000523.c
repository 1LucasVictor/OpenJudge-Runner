#include<stdio.h>
 
#define N 100005
#define NIL -1
 
struct Node{ int p, l, r;};
struct Node T[N];

void inorder(int u){
  if(u != NIL){
    inorder(T[u].l);
    printf(" %d",u);   
    inorder(T[u].r); 
  }
}
void preorder(int u){
  if(u != NIL){
    printf(" %d",u);  
    preorder(T[u].l);
    preorder(T[u].r);
  }
}
void postorder(int u){
  if(u != NIL){
    postorder(T[u].l);
    postorder(T[u].r);
    printf(" %d",u);
  }
}
  
int main(int argc,char *argv[]){
  int i, v,n;    
    scanf("%d", &n);
    for ( i = 0; i < n; i++ ) {
      T[i].p = T[i].l = T[i].r = NIL;
    }
    for ( i = 0; i < n; i++ ){
      scanf("%d",&v);
      scanf("%d %d",&T[v].l,&T[v].r);   
      T[T[v].l].p = v;
      T[T[v].r].p = v;
    }
      
      
    printf("Preorder\n");
    for(i=0; i<n; i++){
      if(T[i].p == NIL)
      preorder(i);
    }
    printf("\nInorder\n");
    for(i=0; i<n; i++){
      if(T[i].p == NIL)
      inorder(i);
    }
    printf("\nPostorder\n");
    for(i=0; i<n; i++){ 
      if(T[i].p == NIL)
      postorder(i);
    }
    printf("\n");
     
    return 0;  
}