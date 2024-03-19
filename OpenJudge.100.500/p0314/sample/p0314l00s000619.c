#include<stdio.h>
#define NIL -1 /*??????????????????????????????????????????????????\?????????????????????*/
struct Node{

  int left;
  int right;
  int parent;

};

void prewalk(int);
void inorderwalk(int);
void postorderwalk(int);

struct Node inputNodedata[10000];

int main(){

  int sumNode,Nodeid,i,j,root,leftdata,rightdata;

  scanf("%d",&sumNode);
  for(i = 0; i < sumNode; i++){

    inputNodedata[i].left = NIL;
    inputNodedata[i].right = NIL;
    inputNodedata[i].parent = NIL;
  }
 

  for(i = 0; i < sumNode; i++){

    scanf("%d",&Nodeid);
    scanf("%d",&leftdata);
    scanf("%d",&rightdata);

    inputNodedata[Nodeid].left = leftdata; /*????????????????±????????????????????????§??\?????????leftdata??¨rightdata????????¨???Nodeid?????????????????¨??????????????¨???????????¨??????*/
    inputNodedata[Nodeid].right = rightdata;

    if(leftdata != NIL) {

      inputNodedata[leftdata].parent = Nodeid;

    }

    if(rightdata != NIL){

      inputNodedata[rightdata].parent = Nodeid;

    }
    
    if(inputNodedata[i].parent == NIL){

      root = i;
    }
  }


  printf("Preorder\n");
  prewalk(root);
  printf("\n");
  printf("Inorder\n");
  inorderwalk(root);
  printf("\n");
  printf("Postorder\n");
  postorderwalk(root);
  printf("\n");

  /*  for(i = 0; i < sumNode; i++){

    printf("node %d: parent = %d, sibling = %d, degree = %d, depth = %d, height = %d, ",i,inputNodedata[i].parent,sibling(i),children(i),depth(i),height(i));
     judge(i);

     }*/



  return 0;

}

void prewalk(int Nodeid){


  if(Nodeid != NIL){

    printf(" %d",Nodeid);
    prewalk(inputNodedata[Nodeid].left);
    prewalk(inputNodedata[Nodeid].right);
  

  }

}

void inorderwalk(int Nodeid){

  if(Nodeid != NIL){

    inorderwalk(inputNodedata[Nodeid].left);
    printf(" %d",Nodeid);
    inorderwalk(inputNodedata[Nodeid].right);

  }
}

void postorderwalk(int Nodeid){

  if(Nodeid != NIL){

    postorderwalk(inputNodedata[Nodeid].left);
    postorderwalk(inputNodedata[Nodeid].right);
    printf(" %d",Nodeid);
  }

}