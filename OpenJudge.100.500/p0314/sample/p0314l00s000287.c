#include<stdio.h>
 
struct tree{
 int back, left, right;
};
 
struct tree a[25];
 
void preorder(int id){
 if (id == -1){
 return;  
 }
 printf(" %d", id);
 preorder(a[id].left);
 preorder(a[id].right);
}
 
void inorder(int id){
 if (id == -1){
 return;  
 }
 inorder(a[id].left);
 printf(" %d", id);
 inorder(a[id].right);
}
 
void postorder(int id){
 if (id == -1){
 return;  
 }
 postorder(a[id].left);
 postorder(a[id].right);
 printf(" %d", id);
}
 
int main(){
 int num, i, Start, point, left, right;
  
 scanf("%d", &num);
 for(i = 0; i < num; i++){
   a[i].back = -1;
 }
 
 for(i = 0; i < num; i++){
   scanf("%d %d %d", &point ,&left, &right);
   a[point].left  = left;
   a[point].right = right;
   if(left != -1){
     a[left].back  = point;
   }
   if(right != -1){
     a[right].back = point;
   }
 }
  
 for(i = 0; i < num; i++){
    /* check
    printf("%d %d %d %d\n",i, a[i].back,a[i].left,a[i].right);
    */
   if(a[i].back == -1){
     Start = i;
   }
 }
 
 printf("Preorder\n");
 preorder(Start);
 printf("\n");
 
 printf("Inorder\n");
 inorder(Start);
 printf("\n");
 
 printf("Postorder\n");
 postorder(Start);
 printf("\n");
 
 return 0;
}