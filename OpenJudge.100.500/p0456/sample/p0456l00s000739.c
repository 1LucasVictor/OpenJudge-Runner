#include <stdio.h>
#include <string.h>
int main(void){
  char S[200000];
  char T[200000];
  int i;
  int a=0;
  scanf("%s",&S);
  scanf("%s",&T);
  
  for(i=0;S[i]!='\0';i++){
    if(S[i]!=T[i]){
      a=a+1;
    }
  }
 
  printf("%d",a);
  return 0;
}