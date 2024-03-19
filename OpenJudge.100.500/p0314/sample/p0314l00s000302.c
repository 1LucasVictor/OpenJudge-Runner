#include <stdio.h>
struct tree{
  int id;
  int left;
  int right;
  int p;
  int s;
};
struct tree num[25];

//Preorder
void Preorder(int u){
  if(u!=-1){
    printf(" %d",num[u].id);
    Preorder(num[u].left);
    Preorder(num[u].right);
  }
}

//Inorder
void Inorder(int u){
  if(u!=-1){
    Inorder(num[u].left);
    printf(" %d",num[u].id);
    Inorder(num[u].right);
  }
}
//Postorder
void Postorder(int u){
  if(u!=-1){
    
    Postorder(num[u].left);
    Postorder(num[u].right);
    printf(" %d",num[u].id);
  }
}

int main(){
  int in,n,i,j,si1,si2,pa;

  scanf("%d",&n); //???????????°?????\???

//????????????,???????????????????????????????¨??????????
  for(i=0;i<n;i++){
    num[i].p=-1;
    num[i].s=-1;
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
    num[si1].s=num[in].right;
    }
    else if(num[in].right!=-1 && num[in].left==-1){
    num[si2].s=si1;
    si2=num[in].right;
    num[si2].p=in;
    num[si2].s=num[in].left;
    }
    else{
      si1=num[in].left;
      num[si1].p=in;
      num[si1].s=num[in].right;
      num[si2].s=si1;
      si2=num[in].right;
      num[si2].p=in;
      num[si2].s=num[in].left;
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