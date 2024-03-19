#include<stdio.h>

struct X{
   int c, l, r;
};

struct X Y[1000];


void preorder(int num){
   if(num == -1)
      return;
   printf(" %d", num);
   preorder(Y[num].l);
   preorder(Y[num].r);
}

void inorder(int num){
   if(num == -1)
      return;
   inorder(Y[num].l);
   printf(" %d", num);
   inorder(Y[num].r);
}

void postorder(int num){
   if(num == -1)
      return;
   postorder(Y[num].l);
   postorder(Y[num].r);
   printf(" %d", num);
}



int main () {   int n, i, v, l, r, root;

   scanf("%d", &n);
   for(i = 0; i < n; i++){
      Y[i].c = -1;
   }

   for(i = 0; i < n; i++){
      scanf("%d %d %d", &v, &l, &r);
      Y[v].l = l;
      Y[v].r = r;
      if(l != -1)
         Y[l].c = v;
      if(r != -1)
         Y[r].c = v;
   }

   for(i = 0; i< n; i++){
      if(Y[i].c == -1)
         root = i;
   }


   printf("Preorder\n");
   preorder(root);
   printf("\nInorder\n");
   inorder(root);
   printf("\nPostorder\n");
   postorder(root);
   printf("\n");

   return 0;

}