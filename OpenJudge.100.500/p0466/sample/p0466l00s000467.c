#include<stdio.h>
#include<string.h>

int main(void){
  int i;
  char s[10],t[11];
  scanf("%s", &s);
  scanf("%s", &t);
  for(i=0;i<strlen(s);i++){
    if(s[i] != t[i]){
      printf("No");
      break;
    }
  }
  if(i == strlen(s))
    printf("Yes");
  return 0;
}