#include <stdio.h>

int main(){
  int i;
  char s[11],t[12];
  scanf("%s",&s);
  scanf("%s",&t);
  for(i=0;s[i]!=0;i++){
    if(s[i]!=t[i]) break;
  }
  
  if(s[i]==0){
    printf("Yes");
  }else{
    printf("No");
  }
  return(0);
}