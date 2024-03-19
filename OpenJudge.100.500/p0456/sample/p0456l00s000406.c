#include <stdio.h>

int main(void){
  char s[1000000];
  char t[1000000];
  scanf("%s", s);
  scanf("%s", t);
  int i;
  int ans=0;
  for(i=0; s[i]!=0; i++){
    if(s[i]!=t[i]){
      ans++;
    }
  }
  
  printf("%d\n", ans);
  
  return 0;
}