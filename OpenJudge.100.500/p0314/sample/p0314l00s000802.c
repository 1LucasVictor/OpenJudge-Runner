#include <stdio.h>
struct Node{
  int p;
  int l;
  int r;
};
 
int n;
struct Node T[10001];
 
 
void preParse(int a){
  if(a==-1){
    return;
  }
  printf(" %d",a);
  preParse(T[a].l);
  preParse(T[a].r);
}
 
void inParse(int b){
  if(b==-1){
    return;
  }
  inParse(T[b].l);
  printf(" %d", b);
  inParse(T[b].r);
}
 
void postParse(int c){
  if(c==-1){
    return;
  }
  postParse(T[c].l);
  postParse(T[c].r);
  printf(" %d",c);
}
 
int main(){
  int i,a,l,r,root;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    T[i].p=-1;
  }
  for(i=0; i<n; i++){
    scanf("%d %d %d",&a,&l,&r);
    T[a].l=l;
    T[a].r=r;
    if(l!=-1){
      T[l].p=a;
    }
    if(r!=-1){
      T[r].p=a;
    }
  }
  for(i=0; i<n; i++){
    if(T[i].p==-1){
      root=i;
    }
  }
  printf("Preorder\n");
  preParse(root);
  printf("\n");
  printf("Inorder\n");
  inParse(root);
  printf("\n");
  printf("Postorder\n");
  postParse(root);
  printf("\n");
   
  return 0;
}