#include <stdio.h>
#include <string.h>

int main(){
  char s[200005], t[200005];  scanf("%s %s", s, t);
  int count = 0, len = strlen(s);
  for(int i=0; i<len; i++){
    if(s[i] != t[i])  count++;
  }
  
  printf("%d\n", count);
  
  return 0;
}