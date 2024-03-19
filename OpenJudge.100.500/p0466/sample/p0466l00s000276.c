#include<stdio.h>
#include<string.h>
int main(void){
  char s[10];
  char t[11];
  int i;
  scanf("%s",s);
  scanf("%s",t);
  i = strlen(s);
  t[i] = '\0';
  if(strcmp(s,t)==0){
    printf("Yes");
  }
  else if(!strcmp(s,t)==0){
    printf("No");
  }
  return 0;
  
}