#include <stdio.h>
#include <string.h>

int main(void){
  char S[100];
  char T[100];
  scanf("%s",S);
  scanf("%s",T);
  
   int a = strlen(S);
   int b = strlen(T);
  
  int count=0;
  for(int i=0;i<a;i++){
  if (S[i]==T[i]) count++;
  }
  
  if(count==a) printf("Yes");
  else printf("No");
  
  return 0;
  
}