#include<stdio.h>

int main(){
   char str[3];
   scanf("%s",str);
   if(str[1] == 'B'){
      printf("ARC\n");
   } else {
      printf("ABC\n");
   }
   return 0;
}
