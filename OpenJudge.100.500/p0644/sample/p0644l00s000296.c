#include <stdio.h>
int main(){
  char s[3];
  int i,j=0;
  scanf("%s",s);
  for(i=0;i<3;i++) if(s[i]-'0') j++;
  printf("%d",j);
}