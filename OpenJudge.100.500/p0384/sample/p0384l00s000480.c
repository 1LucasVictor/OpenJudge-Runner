#include <stdio.h>
char exchange(char c) {
      if('A' <= c && c <= 'Z') {
          return c + ('a' - 'A');
      }
      if('a' <= c && c <= 'z') {
          return c - ('a' - 'A');
      }
      else return c;
  }
int main(void){
   char ch;
   while(1){
   scanf("%c" ,&ch);
  // printf("%c", ch);
   printf("%c" , exchange(ch));
   if(ch == '\n') break;
   }
  return 0;
}
