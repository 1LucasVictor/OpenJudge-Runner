#include<stdio.h>
#define NIL -1 /*??????????????????????????????????????????????????\?????????????????????*/
struct Node{

  int left;
  int right;
  int parent;

};

int sibling(int);
int children(int);
int depth(int);
int height(int);
void judge(int);
void prewalk(int);
void inorderwalk(int);
void postorderwalk(int);

struct Node inputNodedata[10000];

int main(){

  int sumNode,Nodeid,i,j,leftdata,rightdata,root;

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
/*int sibling(int Nodeid){



  if(inputNodedata[Nodeid].parent == NIL){

    return NIL;

  }

else  if(inputNodedata[inputNodedata[Nodeid].parent].left != Nodeid && inputNodedata[inputNodedata[Nodeid].parent].left != NIL){

    return inputNodedata[inputNodedata[Nodeid].parent].left;

  }

  else if(inputNodedata[inputNodedata[Nodeid].parent].right != Nodeid && inputNodedata[inputNodedata[Nodeid].parent].right != NIL){

    return inputNodedata[inputNodedata[Nodeid].parent].right;

  }


  else {

    return NIL;

  }

}

int children(int Nodeid){

  int sumchild ;

  sumchild = 0;

  if(inputNodedata[Nodeid].left != NIL){

    sumchild = sumchild + 1;

  }

  if(inputNodedata[Nodeid].right != NIL){

    sumchild = sumchild + 1;
  }

  return sumchild;

}

int depth(int Nodeid){??¢??°???????§?????????°??§????????????????????????????????????????????§?????£??????????????°?????????????????????return*/

/* int depth = 0;
  int id = inputNodedata[Nodeid].parent;
  while(id != NIL){

    id = inputNodedata[id].parent;
    depth = depth + 1;
  }
 
  return depth;

}

int height(int Nodeid){
  int leftheight=0,rightheight=0;

  if(inputNodedata[Nodeid].left != NIL){

    leftheight = height(inputNodedata[Nodeid].left) + 1;
  }

  if(inputNodedata[Nodeid].right != NIL){

    rightheight = height(inputNodedata[Nodeid].right) + 1;

  }

  if(leftheight > rightheight){

    return leftheight;

  }

  else{

    return rightheight;

  }

}


void judge(int i){

  if(inputNodedata[i].parent == NIL){

    printf("root\n");

  }

  else if(inputNodedata[i].left ==NIL && inputNodedata[i].right == NIL){

    printf("leaf\n");

  }

  else{

    printf("internal node\n");

  }

  } */