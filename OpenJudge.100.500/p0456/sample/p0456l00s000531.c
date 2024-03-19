#include<stdio.h>
#include<string.h>

int main(void){
  char s[200001],t[200001];
  scanf("%s",s);
  scanf("%s",t);
  int c=0;
  for(int i=0;i<strlen(s);i++){
    if(s[i]!=t[i]){
      t[i]=s[i];
      c++;
    }
  }
  printf("%d",c);
  return 0;
}