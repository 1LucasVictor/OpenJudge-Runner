#include <stdio.h>
#include <string.h>
#define min(a, b) ((a)>(b) ? (b) : (a))

int main(){
  char s[100005];  scanf("%s", s);
  int red = 0, blue = 0;
  for(int i=0; i<strlen(s); i++)
    if(s[i] == '0')  red++;
    else  blue++;
  printf("%d\n", min(red, blue)*2);
  return 0;
}
