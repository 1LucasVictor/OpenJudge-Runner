#include<stdio.h>
#include<string.h>
int main(void){
      int i, len;
  char s[4096];
  fgets(s, sizeof(s), stdin);
  len = strlen(s);
  for(i = 0; i < len;i++) {
    if(s[i]>=65&&s[i]<=90)
    s[i] = s[i]+32;
    else if(s[i]>=97&&s[i]<=122)
      s[i]=s[i]-32;
    else
    s[i] = s[i];
  }
  printf("%s",s);
}

