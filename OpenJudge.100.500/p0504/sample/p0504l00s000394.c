#include <stdio.h>
 int main(void){
  int H,a,c=0;
   scanf("%d %d",&H,&a);
  // printf("%d %d\n",H,a);
   while(H>0){
     H = H-a;
     c++;  
 }
   printf("%d",c);
} 