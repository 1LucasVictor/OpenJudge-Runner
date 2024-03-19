#include <stdio.h>
#include<string.h>

int main() {
   char s[10], t[11];
   int count = 0;
   
   scanf("%s %s", s, t);

   int x = strlen(s);
   for(int i = 0; i < x; i++){
       if(s[i] == t[i]){
          count++;
       }
   }
   if(count == x){
      printf("Yes\n");
   }else{
      printf("No\n");
   }
}
