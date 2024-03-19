#include<stdio.h>
#define MAX 10000
#define NIL -1

 struct Node{
          int parent;
          int left;
          int right;
          };

 struct Node T[MAX];

 void Preorder(int u){
           if(u==NIL)return;
           printf(" %d",u);
           Preorder(T[u].left);
           Preorder(T[u].right);
           }

 void Inorder(int u){
           if(u==NIL)return;
           Inorder(T[u].left);
           printf(" %d",u);
           Inorder(T[u].right);
           }

 void Postorder(int u){
           if(u==NIL)return;
           Postorder(T[u].left);
           Postorder(T[u].right);
           printf(" %d",u);
           }

 int main(){
        int i,n,v,l,r,root;
        scanf("%d",&n);
        for(i=0;i<n;i++){T[i].parent=T[i].left=T[i].right=NIL;}
        for(i=0;i<n;i++){
                  scanf("%d%d%d",&v,&l,&r);
                  T[i].left=l;
                  T[i].right=r;
                  if(l!=NIL)T[l].parent=v;
                  if(r!=NIL)T[r].parent=v;
                  }
        for(i=0;i<n;i++){if(T[i].parent==NIL)root=i;}

       printf("Preorder\n");
       Preorder(root);
       printf("\n");
 
       printf("Inorder\n");
       Inorder(root);
       printf("\n");
 
       printf("Postorder\n");
       Postorder(root);
       printf("\n");
        return 0;
        }




