#include<stdio.h>
#include<string.h>
#define min(a,b) ((a)>(b)?(b):(a))
int main(){
  char s[111111];
  scanf("%s",s);
  int i=0,r=0,b=0;
  for(;i<strlen(s);i++){
    if(s[i]=='0') r++;
    else if(s[i]=='1') b++;
  }
  printf("%d",min(r,b)*2);
}
