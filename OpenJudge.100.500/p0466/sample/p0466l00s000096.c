#include <stdio.h>
#include<string.h>

int main() {
   char s[10], t[11];
   
   scanf("%s %s", s, t);

   int x = strlen(s);
   
   for(int i = 0; i < x; i++){
       if(s[i] != t[i]){
          printf("No\n");
          return 0;
       }
   }
   printf("Yes\n");
}
