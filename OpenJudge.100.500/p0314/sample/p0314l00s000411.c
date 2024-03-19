#include<stdio.h>
#define N 100
typedef struct{
  int p,l,r;
}NODE;
void Pre(NODE *,int);
void In(NODE *,int);
void Post(NODE *,int);
  int main(){
    int n,i,j,id,l,r,head;
    NODE T[N];
    for(i=0;i<N;i++)
      T[i].p=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d%d%d",&id,&l,&r);
      T[l].p=id;
      T[r].p=id;
      T[id].l=l;
      T[id].r=r;
      
    }
    for(i=0;i<n;i++){

      if(T[i].p==-1)
	head=i;
    }
      
    printf("Preorder\n");
      Pre(T,head);
    printf("\n");
    printf("Inorder\n");
      In(T,head);
    printf("\n");
    printf("Postorder\n");
      Post(T,head);
    printf("\n");
    return 0;
  }
void Pre(NODE T[],int i){
  if(i==-1)
    return;
  printf(" %d",i);
  Pre(T,T[i].l);
  Pre(T,T[i].r);

}void In(NODE T[],int i){
  if(i==-1)
    return;
  
  In(T,T[i].l);
  printf(" %d",i);
  In(T,T[i].r);

}void Post(NODE T[],int i){
  if(i==-1)
    return;
  Post(T,T[i].l);
  Post(T,T[i].r);
printf(" %d",i);
}

