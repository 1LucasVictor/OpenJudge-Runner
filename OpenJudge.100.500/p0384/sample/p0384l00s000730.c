#include <stdio.h>
int main(){
  int i=0;
  char s[1200]={'\0'};
  fgets(s,1200,stdin);
  for(;i<1200;i++){
    if(s[i]=='\n'){
      s[i]='\0';
      break;
    }
    if(s[i]-'A'>=0&&'Z'-s[i]>=0)s[i]+='a'-'A';
    else if(s[i]-'a'>=0&&'z'-s[i]>=0)s[i]+='A'-'a';
  }
  puts(s);
  return 0;
}