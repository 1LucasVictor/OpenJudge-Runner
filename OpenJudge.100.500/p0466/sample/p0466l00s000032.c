#include<stdio.h>
int main(){
  char s[256],t[256];
  scanf("%s",&s);
  scanf("%s",&t); 
  int i=0;
  int c=0;
  while(s[i]!=0) {
    if (s[i]==t[i]) c++;
    else break;
    i++;
  }
  if (i==c) printf("Yes");
  else printf("No");
  return 0;
}