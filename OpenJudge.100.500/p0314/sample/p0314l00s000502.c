#include <stdio.h>
#define MAX 25
#define NIL -1 /*use to show there no anything*/

typedef struct{
  int parent,left,right;
}Record;

void Preorder(int, Record*);
void Inorder(int, Record*);
void Postorder(int, Record*);

int main(){
  int i,num,id,root,lef,rig;
  Record data[MAX];
  scanf("%d",&num);
  for(i=0;i<num;i++) {
    data[i].parent=NIL;
    
  }
  
  for(i=0;i<num;i++){
    scanf("%d%d%d",&id,&lef,&rig);
    data[id].left=lef;
    data[id].right=rig;
      
    if(lef!=NIL) data[lef].parent=id;   
    
    if(rig!=NIL)  data[rig].parent=id;   
    
  }
  for(i=0;i<num;i++){
    if(data[i].parent==NIL){
      root=i;
      break;
    }
  }
  printf("Preorder\n");
  Preorder(root,data);
  printf("\n");

  printf("Inorder\n");
  Inorder(root,data);
  printf("\n");

  printf("Postorder\n");
  Postorder(root,data);
  printf("\n");

  return 0;
}

void Preorder(int x,Record* data){
  if(x==NIL) return ;
  printf(" %d",x);
  Preorder(data[x].left,data);
  Preorder(data[x].right,data);
}

void Inorder(int x,Record* data){
  if(x==NIL) return;
  Inorder(data[x].left,data);
  printf(" %d",x);
  Inorder(data[x].right,data);
}

void Postorder(int x,Record* data){
  if(x==NIL) return;
  Postorder(data[x].left,data);
  Postorder(data[x].right,data);
  printf(" %d",x);
}

