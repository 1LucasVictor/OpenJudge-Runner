#include <stdio.h>
#include<string.h>

int main() {
   char s[10], t[11];
   
   scanf("%s %s", s, t);
   
   for(int i = 0; i < strlen(s); i++){
       if(s[i] == t[i]){
       }else{
          printf("No\n");
          return 0;
       }
   }
   printf("Yes\n");
}