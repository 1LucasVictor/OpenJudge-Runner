#include<stdio.h>
 
 
typedef struct{
  int id;
  int left;
  int right;
  int p;
  int s;
  int dep;
  int deg;
  int h;
}Tree;
 
Tree A[25];
 
void preParse(int);
void inParse(int);
void postParse(int);
 
 
int main(){
  int in,n,i,s1,s2;
  int pa,pc,hc,he,box;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    A[i].p=-1;
    A[i].s=-1;
    A[i].deg=0;
    A[i].h=0;
  }
  
  for(i=0;i<n;i++){
    scanf("%d",&in);
    A[in].id=in;
    scanf("%d %d",&A[in].left,&A[in].right);
    if(A[in].left!=-1&&A[in].right!=-1){
      A[in].deg=2;
    }else if(A[in].left!=-1||A[in].right!=-1){
      A[in].deg=1;
    }
  
    s1=A[in].left;
    s2=A[in].right;
    A[s1].p=A[in].id;
    A[s2].p=A[in].id;
    A[s1].s=s2;
    A[s2].s=s1;
  }
  
  for(i=0;i<n;i++){
    if(A[i].p==-1){
      A[i].dep=0;
    }else{
      pa=A[i].p;
      pc=1;
      
      while(A[pa].p!=-1){
    pc++;
    pa=A[pa].p;
      }
      A[i].dep=pc;
    }
  }
  
  
  
  for(i=0;i<n;i++){
    if(A[i].deg==0){
      hc=0;
      A[i].h=hc;
      pa=A[i].p;
  
      while(pa!=-1){
    hc++;
    if(A[pa].h<=hc){
      A[pa].h=hc;
      pa=A[pa].p;
    }
      }
    }
  }
 
  for(i=0;i<n;i++){
    if(A[i].p==-1){
      box = i;
      break;
    }
  }
   
  printf("Preorder\n");
  preParse(box);
  printf("\n");
 
  printf("Inorder\n");
  inParse(box);
  printf("\n");
 
  printf("Postorder\n");
  postParse(box);
  printf("\n");
 
   
  return 0;
}
 
void preParse(int u){
  if(u == -1)return;
  printf(" %d",u);
  preParse(A[u].left);
  preParse(A[u].right);
}
 
void inParse(int u){
  if(u==-1)return;
  inParse(A[u].left);
  printf(" %d",u);
  inParse(A[u].right);
}
 
void postParse(int u){
  if(u==-1)return;
  postParse(A[u].left);
  postParse(A[u].right);
  printf(" %d",u);
}