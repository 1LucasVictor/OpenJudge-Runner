#include<stdio.h>

int main(){
   char x[3];
   scanf("%s", x);
   if(x[0] == x[1] && x[1] == x[2]){
      printf("No\n");
   }else{
      printf("Yes\n");
   }
   return 0;
}
