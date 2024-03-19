#include <stdio.h>
int main(){


  int data[10000];
  int n,i;

  scanf("%d",&n);
 for(i=0;i<n;i++){

   scanf("%d",&data[i]);
 
 }

 for(i=n-1;i>0;i--){

   printf("%d ",data[i]);
  
 }
 printf("%d",data[0]);
 printf("\n");
 return 0;
}