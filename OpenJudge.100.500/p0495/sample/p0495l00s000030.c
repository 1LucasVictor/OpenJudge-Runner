#include<stdio.h>
int main(void){
  char s[5];
  scanf("%s",s);
    puts(s[0]!=s[1]||s[1]!=s[2]?"Yes":"No");
    return 0; 
}
