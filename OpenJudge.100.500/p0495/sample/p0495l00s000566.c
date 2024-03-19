#include <stdio.h>

int main (){
  char s[4];
  scanf("%s", s);

  for (int i = 0; i < 3; i++) {
    if((s[i]=='A' && s[i+1]=='B') || s[i]=='B' && s[i+1]=='A'){
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");


  return 0;
}
