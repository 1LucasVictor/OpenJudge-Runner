#include<stdio.h>
#include<string.h>

int main(){
  int i,l;
  char s[20];
  char res[20];

  memset(s,'\0',20);
  memset(res,'\0',20);
  scanf("%s",s);
  l = strlen(s);
  for(i=0;i<l;i++){
    res[i] = s[l-i-1];
  }
  printf("%s\n", res);

  return 0;
}
