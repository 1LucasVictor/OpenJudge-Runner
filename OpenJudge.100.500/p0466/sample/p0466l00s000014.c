#include <stdio.h>
#include<string.h>

int main() {
   char s[10], t[11];
   
   scanf("%s %s", s, t);

   int i;
   for(i = 0; s[i] != '\0'; i++){
       if(s[i] != t[i]){
          printf("No\n");
          return 0;
       }
   }
   if(t[i+1] != '\0'){
      printf("No\n");
   }else{
      printf("Yes\n");
   }
   return 0;
}
