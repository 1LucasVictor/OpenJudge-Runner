#include <stdio.h>
int main(void){
int a,b;
  int count=0;
char s[100];
  scanf("%s",s);
if(s[0]=='1'){count++;}
  if(s[1]=='1'){count++;}
  if(s[2]=='1'){count++;}
  printf("%d",count);
}