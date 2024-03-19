#include <stdio.h>
#include <string.h>

int main(void){
 char S[3];
 char *ad1;
 char *ad2;
  
  scanf("%s",S);
  
  ad1=strstr(S,"AAA");
  ad2=strstr(S,"BBB");
  
  if((ad1!=NULL)||(ad2!=NULL)){
    printf("No\n");
  }
  else{
    printf("Yes\n");
  }
  
  return 0;
}