#include<stdio.h>
int main(){
  char s[10],i;
  scanf("%s",s);
  for(i=0;s[i+1];i++){
    if(s[i]==s[i+1])break;
  }
  printf("%s\n",s[i+1]?"Bad":"Good");
  return 0;
}
