#include <stdio.h>
#include <string.h>

int main(){
  int i, a, b;
  char s[12], t[12];
  scanf("%s",s);
  scanf("%s",t);
  a = strlen(s);
  b = strlen(t);
  if(a != b-1) {
    puts("No");
    return 0;
  }
  for(i=0;i<a;i++){
    if(s[i]!=t[i]){
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
  