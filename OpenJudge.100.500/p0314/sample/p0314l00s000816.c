//2020.1.6
//s1270188 xxxmk2
//alds1_07c

#include<stdio.h>
#include<stdlib.h>

//struct
typedef struct{
  int p, l, r;
}node;

//prototype
void pre(int);
void in(int);
void post(int);

//global
node *data;

int main(){
  int i, a, cnt, num, root;

  //input
  scanf("%d",&num);
  data=(node *)malloc(sizeof(node)*num);
  for(i=0;i<num;i++) data[i].p=-1;
  for(i=0;i<num;i++){
    scanf("%d",&a);
    scanf(" %d %d",&data[a].l,&data[a].r);
    data[data[a].l].p=a;
    data[data[a].r].p=a;
  }

  //find root
  i=0;
  while(data[i].p!=-1) i++;
  root=i;
  
  //preorder
  printf("Preorder\n");
  pre(root);
  printf("\n");
  
  
  //inorder
  printf("Inorder\n");
  in(root);
  printf("\n");
  
  //postorder
  printf("Postorder\n");
  post(root);
  printf("\n");
  
  free(data);
  return 0;
}

void pre(int n){
  printf(" %d",n);

  if(data[n].l!=-1) pre(data[n].l);
  if(data[n].r!=-1) pre(data[n].r);
}

void in(int n){
  if(data[n].l!=-1) in(data[n].l);

  printf(" %d",n);

  if(data[n].r!=-1) in(data[n].r);
}

void post(int n){

  if(data[n].l!=-1) post(data[n].l);
  if(data[n].r!=-1) post(data[n].r);

  printf(" %d",n);
}




