#include <stdio.h>
#include <string.h>

int main(){
  char s[5];
  scanf("%s",s);
  for(int i=1; i<4; i++){
    if(s[i-1] == s[i]){
      printf("Bad\n");
      return 0;
    }
  }
  printf("Good\n");
}