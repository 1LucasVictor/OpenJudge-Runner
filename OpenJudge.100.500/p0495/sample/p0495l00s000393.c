#include<stdio.h>

int main(void){
   char s[3];
   int i;
   for(i=0;i<3;i++){
      scanf("%c",&s[i]);
   }
   if(s[0]!=s[1]||s[1]!=s[2]){
      printf("Yes");
   } else {
      printf("No");
   }
   return 0;
}
