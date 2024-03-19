#include<stdio.h>
#include<string.h>
#include <stdbool.h>
int main(){
 
   char T[11];

  char S[11];
   scanf("%s",S);

   scanf("%s",T);
   


 bool ok = true;
 for (int i = 0; i < strlen(S); i++)
{
   if (S[i] != T[i]) {
      ok = false;
   }
}
if (ok)
{
    printf("Yes");
}else{
  printf("No");
}
   
    return 0;
}
