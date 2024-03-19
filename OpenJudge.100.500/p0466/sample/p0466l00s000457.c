#include <stdio.h>
#include <string.h>
 
int main(void){
  char s[10];
  char t[10];
  scanf("%s",s);
  scanf("%s",t);
  int len = strlen(t);
  t[len-1] = '\0';
  if(strcmp(s,t) == 0){
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}