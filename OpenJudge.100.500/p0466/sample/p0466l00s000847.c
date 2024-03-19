#include<stdio.h>

int main(){
   char s[10], t[11];
   scanf("%s", s);
   scanf("%s", t);

   int s_len, t_len;
   for(s_len = 0; s[s_len] != 0; s_len++);
   for(t_len = 0; t[t_len] != 0; t_len++);

   if(s_len  == t_len - 1){
      int judge = 0;
      for(int i=0; i<s_len; i++){
         if(s[i] != t[i]){
            judge = 1;
         }
      }
      if(judge == 0){
         printf("Yes\n");
      } else {
         printf("No\n");
      }
   } else {
      printf("No\n");
   }

   return 0;
}
