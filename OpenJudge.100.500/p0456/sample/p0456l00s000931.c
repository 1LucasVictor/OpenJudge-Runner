#include<stdio.h>
#include<string.h>
int main(void){
  char s[200000];
  char t[200000];
  scanf("%s%s",s,t);
  int i,cnt=0;
  int len;
  len=strlen(s);
  for(i=0;i<len;i++){
    if(s[i]!=t[i]){
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}
