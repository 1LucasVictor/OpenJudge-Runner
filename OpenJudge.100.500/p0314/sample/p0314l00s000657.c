#include<stdio.h>
#define MAX 10000
#define NIL -1

//構造体&変数宣言
typedef struct{
  int parent;
  int left;
  int right;
}Tree;

Tree t[MAX];
int num;


//関数宣言
void preParse(int);
void inParse(int);
void postParse(int);
void print(void);

//main
int main(){

  int i,v,l,r;

  scanf("%d",&num);
  for(i = 0; i < num; i++){
    t[i].parent =NIL;
  }

  for(i = 0;i < num; i++){
    scanf("%d %d %d",&v,&l,&r);
    t[v].left = l;
    t[v].right = r;
    if(l != NIL)t[l].parent = v;
    if(r != NIL)t[r].parent = v;
  }

  print();

  return 0;
}


//関数

/*先行順巡回*/
void preParse(int u){

  if(u == NIL)return;
  printf(" %d",u);
  preParse(t[u].left);
  preParse(t[u].right);
}

/*中間順巡回*/
void inParse(int u){

  if(u == NIL)return;
  inParse(t[u].left);
  printf( " %d",u);
  inParse(t[u].right);
}

/*後行順巡回*/
void postParse(int u){

  if(u == NIL)return;
  postParse(t[u].left);
  postParse(t[u].right);
  printf(" %d",u);
}

/*出力*/
void print(){
  int i,root;
  for(i = 0; i < num; i++){
    if(t[i].parent == NIL)root = i;
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

}