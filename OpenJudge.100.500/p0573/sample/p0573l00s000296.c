#include<stdio.h>
int main(void){
  char s[4];
  for(int i=0;i<4;i++){
    scanf("%s",&s[i]);
  }

  if(s[0]==s[1]){
    if(s[2]==s[3]&&(s[0]!=s[2])){
      puts("Yes");
      return 0;
    }
  }
  if(s[0]==s[2]){
    if((s[1]==s[3])&&(s[0]!=s[1])){
      puts("Yes");
      return 0;
    }
  }
  if(s[0]==s[3]){
    if(s[1]==s[2]&&(s[0]!=s[1])){
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}
