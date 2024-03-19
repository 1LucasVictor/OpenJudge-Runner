#include <stdio.h>
int main(){
  char s[10];
  int c,i,k;
  c == 0;
  scanf("%s",s);
  for(i=0;i<4;i++){
    for(k=0;k<4;k++){
      if(s[i] == s[k]) c++;
    }
  }
  if(c == 8) printf("Yes");
  else printf("No");
}