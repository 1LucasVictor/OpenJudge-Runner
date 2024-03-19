#include<stdio.h>
#include<string.h>

int main(void){
  char s[12],t[12];
  scanf("%s",s);
  scanf("%s",t);
  for(int i=0;i<strlen(s);i++){
    if(s[i]!=t[i]){
      printf("No\n");
     return 0;
    }
  }
  printf("Yes\n");
  return 0;
}