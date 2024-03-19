#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main (){
  char s[10],t[11];
  scanf("%s",s);
  scanf("%s",t);
  
  bool ok = 0;
  
  for(int i=0;i<strlen(s);i++){
    if(s[i]==t[i]) ok = 1;
  }
  
  if(ok)printf("Yes");
  else printf("No");
  return 0;
}
