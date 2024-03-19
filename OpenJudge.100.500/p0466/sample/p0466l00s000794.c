#include <stdio.h>
#include <string.h>

int main(void){
  char s[11],t[12];
  scanf("%s",s);
  scanf("%s",t);
  int i=0;
  if(strncmp(s,t,strlen(s)) != 0 || strlen(s)+1 != strlen(t)){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}
