#include <stdio.h>
#include <string.h>
#define N  4
int main(){
  const char abc[N] = "ABC";
  const char arc[N] = "ARC";
	char s[N];
  scanf("%s", s);
  if(strcmp(abc, s) == 0){
    puts("ARC");
  }else if(strcmp(arc, s) == 0){
    puts("ABC");
  }

  return 0;
}