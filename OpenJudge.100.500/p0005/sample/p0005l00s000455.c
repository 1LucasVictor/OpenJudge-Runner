#include <stdio.h>
#include <string.h>

int main(){
  char line[30];
  char c;
  int cnt, i;

  scanf("%s", line);
  cnt = strlen(line)-1;

  for(i = 0;i < (cnt+1)/2; i++){
    c = line[i];
    line[i] = line[cnt-i];
    line[cnt-i] = c;
  }
  printf("%s\n", line);
  return 0;
}