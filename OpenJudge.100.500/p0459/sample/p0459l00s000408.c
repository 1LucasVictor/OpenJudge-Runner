#include<stdio.h>

int main(){
   int x,y;
   scanf("%d %d",&x,&y);
   for(int i = 0;i < x;i++){
      if(y%4 == 0){
         y -= 4;
         i++;
         continue;
      }
      if(y%2 == 0){
         y -= 2;
         i++;
      }
   }
   if(y == 0){
      printf("Yes\n");
   } else {
      printf("No\n");
   }
   return 0;
}
