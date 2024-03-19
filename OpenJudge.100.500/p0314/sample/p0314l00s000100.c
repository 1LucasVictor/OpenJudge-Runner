#include <stdio.h>
#define M 500000
#define NIL -1

typedef struct node_tbl{
    int key,p,l,r;
}node;

node T[M+1];
int root=NIL;

void inorder(int u){
  if (u==NIL) return;
  inorder(T[u].l);
  printf(" %d", T[u].key);
  inorder(T[u].r);
}

void preorder(int u){
  if (u==NIL) return;
  printf(" %d", T[u].key);
  preorder(T[u].l);
  preorder(T[u].r);
}

void postorder(int u){
    if(u==NIL) return;
    postorder(T[u].l);
    postorder(T[u].r);
    printf(" %d",T[u].key);
}

int main(void){
    int n,i,k,l,r;
    scanf("%d",&n);
    
    for(i=0;i<n;i++) T[i].p=NIL;
    
    for(i=0;i<n;i++){
        scanf("%d %d %d",&k,&l,&r);
        T[k].l=l,T[k].r=r,T[k].key=k;
        if(l!=NIL) T[l].p=k;
        if(r!=NIL) T[r].p=k;
        
        //printf("%d %d %d %d\n",T[k].key,T[k].l,T[k].r,T[k].p);
    }
    
    for(i=0;i<n;i++){
        if(T[i].p==NIL){
            printf("Preorder\n");
            preorder(i);
            printf("\n");
            printf("Inorder\n");
            inorder(i);
            printf("\n");
            printf("Postorder\n");
            postorder(i);
            printf("\n");
            break;
        }
    }
    return 0;
}

