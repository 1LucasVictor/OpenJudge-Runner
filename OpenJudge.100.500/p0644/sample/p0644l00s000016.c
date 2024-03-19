#include <stdio.h>

// min
int main(void){
  char s[4];
  int ans = 0;

  scanf("%s", s);

  if(s[0] == '1'){
    ans++;
  }
  if(s[1] == '1'){
    ans++;
  }
  if(s[2] == '1'){
    ans++;
  }

  printf("%d\n", ans);
  
  return 0;

}
