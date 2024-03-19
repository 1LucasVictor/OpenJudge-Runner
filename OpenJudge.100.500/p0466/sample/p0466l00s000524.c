#include <stdio.h>
#include <string.h>

int main() {
 int len_s;
 int len_t;
 char s[11];
 char t[12];
 int i;
 
 scanf("%s", s);
 scanf("%s", t);
 
 len_s = strlen(s) + 1;
 len_t = strlen(t) + 1;
  
 for(i = 0; i < len_s; i++) {
  if(&s[i] == &t[i])
    i++;
  else if(&t[i + 1] != "\n")
   printf("Yes");
  else
   printf("No");
   return (0);
 }
  
 return (0);
}