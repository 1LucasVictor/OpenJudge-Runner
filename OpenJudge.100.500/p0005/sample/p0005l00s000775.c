#include <stdio.h>
int main(){
  char s[21];
  int i;
  scanf("%s",&s);
  for(i=0;i<20;i++){
    if(s[i]==0) break;
  }
  for(i=i-1;i>=0;i--){
     printf("%c",s[i]);
  }
  printf("\n");
  return 0;
}