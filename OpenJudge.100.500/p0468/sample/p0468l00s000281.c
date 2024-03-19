#include <stdio.h>
#include <string.h>
 
int main(void)
{
 char S[10];
  scanf("%s", &S);
  
  if(strcmp(S, "ABC") == 0){
     printf("ARC\n");
     }else if(strcmp(S, "ARC") == 0){
       printf("ABC\n");
     }
 	return (0);
}