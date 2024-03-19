#include<stdio.h>
#define MAX 500001
#define NIL -1
typedef struct node{
  int left;
  int right;
  int key;
  int p;
  int leftid;
  int rightid;

}Node;
Node node[MAX];
int root=NIL;
void inorder(int);
void preorder(int);
void addTree(int n,int num){
  int tmp;
  //rootが空の場合
  if(node[n].key==root){
    root=n;
    node[root].key=num;
    
  }
  else{
  tmp=root;

  while(1){
    if(node[tmp].key>num){
      if(node[tmp].left!=NIL){
	tmp=node[tmp].leftid;
      }
      else{
	node[tmp].left=num;
	node[tmp].leftid=n+1;
	node[n+1].key=num;
	
	break;
      }
    }
    else{
      if(node[tmp].right!=NIL){
	tmp=node[tmp].rightid;
	
      }
      else{
	node[tmp].right=num;
	node[n+1].key=num;
	node[tmp].rightid=n+1;
	break;
      }
    }
  }
  
  node[n].p=tmp;
  
  }
}
int main(){
  int num,i,n,l=0,tmp;
  char name[100];
  scanf("%d",&n);
 for(i=0;i<MAX;i++){//初期化
    node[i].p=NIL;
    node[i].left=NIL;
    node[i].right=NIL;
    node[i].key=NIL;
    
  }


 for(i=0;i<n;i++){
    scanf("%s",name);
    if(name[0]=='i'){
      scanf("%d",&num);
      addTree(l,num);
      l++;
      }
      
   else if(name[0]=='p'){
    inorder(root);
   printf("\n");
   preorder(root);
   printf("\n");
      
    }
  }
 
 
 
  return 0;
}
void inorder(int t){
  if(node[t].left!=NIL){
    inorder(node[t].leftid);
  }
    printf(" %d",node[t].key);
  if(node[t].right!=NIL){
    inorder(node[t].rightid);
  }
}
void preorder(int t){
 
      printf(" %d",node[t].key);
  if(node[t].left!=NIL){
    preorder(node[t].leftid);
  }
  if(node[t].right!=NIL){
    preorder(node[t].rightid);
  }
}


