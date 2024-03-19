#include<stdio.h>
#include<string.h>

#define MAX 500000
#define NIL -2000000001
struct becs{
  int id,key,p,l,r;
};
typedef struct becs node;
node A[MAX];

void inp(int a,int u){
  if(u==NIL  || a==u)return;
  if(A[a].key<A[u].key){
    A[a].p=u;
    inp(a,A[u].l);
    if(A[u].l==NIL)A[u].l=a;
    return;
  }
  else{
    A[a].p=u;
    inp(a,A[u].r);
    if(A[u].r==NIL)A[u].r=a;
    return;
  }
}

void primid(int a){
  if(A[a].l!=NIL)primid(A[a].l);
  printf(" %d",A[a].key);
  if(A[a].r!=NIL)primid(A[a].r);
}

void pripri(int a){
  printf(" %d",A[a].key);
  if(A[a].l!=NIL)pripri(A[a].l);
  if(A[a].r!=NIL)pripri(A[a].r);
}

int main(){
  int a,b=0,i,j;
  char c[100];
  scanf("%d",&a);
  for(i=0;i<a;i++){
    A[i].id=A[i].p=A[i].l=A[i].r=NIL;
  }
  for(i=0;i<a;i++){
    scanf(" %s",c);
    if(strcmp(c,"insert")==0){scanf("%d",&A[b].key);A[b].id=b;inp(b,0);b++;}
    else{primid(0);printf("\n");pripri(0);printf("\n");}
  }
}

