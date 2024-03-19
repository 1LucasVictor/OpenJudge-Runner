#include<stdio.h>
#include<string.h>

int main(void){
  char s[200000],t[200000];
  int i=0,j=0,sl=0;
  scanf("%s",s);
  scanf("%s",t);
  sl=strlen(s);
  for(i=0;i<sl;i++){
    if(s[i]!=t[i]){
      j++;
    }
  }
  printf("%d",j);
  return 0;
}