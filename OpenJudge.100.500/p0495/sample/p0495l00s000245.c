#include<stdio.h>
int main(void)
{
  char s[5];
  scanf("%c %c %c",&s[0],&s[1],&s[2]);
  if(s[0]==s[1]&&s[0]==s[2]){
    puts("No");
  }else{
    puts("Yes");
  }
  return 0;
}
