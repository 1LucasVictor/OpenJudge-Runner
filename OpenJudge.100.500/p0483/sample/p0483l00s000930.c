#include <stdio.h>
int main(){
  char s[3];
  scanf("%s",&s);
  if(s[0]=='7'||s[1]=='7'||s[2]=='7'){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}