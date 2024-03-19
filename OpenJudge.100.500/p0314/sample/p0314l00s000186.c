#include<stdio.h>

#define N 25

typedef struct{
  int left;
  int right;
  int parent;
}Tree;

Tree n[N];

preParse(int u){

  printf(" %d",u);

  if(n[u].left!=-1) preParse(n[u].left);
  if(n[u].right!=-1)   preParse(n[u].right);

}

inParse(int u){

  // if (u==NULL) return print u;

  if(n[u].left!=-1)  inParse(n[u].left);
  printf(" %d",u);
  if(n[u].right!=-1) inParse(n[u].right);

}

postParse(int u){

  // if (u==NULL) return print u;

  if(n[u].left!=-1) postParse(n[u].left);
  if(n[u].right!=-1)  postParse(n[u].right);
  printf(" %d",u);

}

int main(){

  int i,a,u;

  scanf("%d",&a);


  for(i=0;i<a;i++){

    n[i].left=-1;
    n[i].right=-1;
    n[i].parent=-1;


  }

  for(i=0;i<a;i++){

    scanf("%d%d%d",&u,&n[i].left,&n[i].right);

    n[n[i].left].parent=u;
    n[n[i].right].parent=u;

  }


  printf("Preorder\n");

  for(i=0;i<a;i++){

    if(n[i].parent==-1) preParse(i);

  }

  printf("\n");


   

  printf("Inorder\n");

  for(i=0;i<a;i++){

    if(n[i].parent==-1) inParse(i);

  }

  printf("\n");


  printf("Postorder\n");

  for(i=0;i<a;i++){

    if(n[i].parent==-1) postParse(i);

  }

  printf("\n");

  return 0;
}