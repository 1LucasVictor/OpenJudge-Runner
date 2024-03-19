#include <stdio.h>
struct tree{
  int id;
  int left;
  int right;
  int p;
};
struct tree num[25];

//Preorder
void Preorder(int u){
  if(u!=-1){
    printf(" %d",u);
    Preorder(num[u].left);
    Preorder(num[u].right);
  }
}

//Inorder
void Inorder(int u){
  if(u!=-1){
    Inorder(num[u].left);
    printf(" %d",u);
    Inorder(num[u].right);
  }
}

//Postorder
void Postorder(int u){
  if(u!=-1){
    
    Postorder(num[u].left);
    Postorder(num[u].right);
    printf(" %d",u);
  }
}

int main(){
  int in,n,i,si1,si2,pa;

  scanf("%d",&n); //???????????°?????\???

  //????????????????????????????¨??????????
  for(i=0;i<n;i++){
    num[i].p=-1;
  }

 
  //???????????????????¨????
  for(i=0;i<n;i++){
    scanf("%d ",&in);
    num[in].id=in;

    scanf("%d %d",&num[in].left,&num[in].right);
    
    if(num[in].left==-1 && num[in].right==-1) continue;
   
    else if(num[in].left !=-1 && num[in].right==-1){
      si1=num[in].left;
      num[si1].p=in;
    }
    else if(num[in].right!=-1 && num[in].left==-1){
      si2=num[in].right;
      num[si2].p=in;
    }
    else{
      si1=num[in].left;
      num[si1].p=in;
      si2=num[in].right;
      num[si2].p=in;
      }

    if(num[in].p==-1) pa=num[in].id;
  }



  //Preorder
  printf("Preorder\n");
  Preorder(pa);
  printf("\n");
  //Inorder
  printf("Inorder\n");
  Inorder(pa);
  printf("\n");

  //Postorder
  printf("Postorder\n");
  Postorder(pa);
  printf("\n");
  return 0;
}