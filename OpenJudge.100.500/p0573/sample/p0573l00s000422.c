#include <stdio.h>

int main(void){
  char s[4];
  scanf("%s", s);
  if(s[0] == s[1]){
    int count = 0;
    if(s[0] == s[2]) count ++;
    if(s[0] == s[3]) count ++;
    if(count == 0 && s[2] == s[3]){
      printf("Yes");
    }else{
      printf("No");
    }
  }else{
    int count1 = 0;
    int count2 = 0;
    if(s[0] == s[2]) count1 ++;
    if(s[0] == s[3]) count1 ++;
    if(s[1] == s[2]) count2 ++;
    if(s[1] == s[3]) count2 ++;
    if(count1 == 1 && count2 == 1){
      printf("Yes");
    }else{
      printf("No");
    }
  }
  return 0;
}
