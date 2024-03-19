#include <stdio.h>

int main(void){
   
   char S[1000100];
   
   scanf("%s",S);
   
   int i;
   int a = 0;
   int b = 0;
   
   for(i = 0; S[i] != '\0';i++){
      if(S[i] == '0'){
         a++;
      }
      else {
         b++;
      }
   }
   
   int ans;
   
   if(a >= b){
      ans = b;
   }
   else {
      ans = a;
   }
   printf("%d\n",ans*2);
   return 0;
}
