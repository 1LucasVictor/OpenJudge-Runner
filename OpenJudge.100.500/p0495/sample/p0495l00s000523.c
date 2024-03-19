#include<stdio.h>

int main(void){
  char s[3];
  int i = 0;
  for(i=0;i<3;i++){
    scanf("%c", &s[i]);
  }
  if(s[0]==s[1] && s[1] == s[2]){
    printf("No");
    return 0;
  }
  printf("Yes");
}