#include <stdio.h>
int main(){
  char line[100];
  int num;
  int hour, min, sec;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &num);
  hour=num/3600;
  num=num%3600;
  min=num/60;
  sec=num%60;
  printf("%d:%d:%d\n", hour, min, sec);
  return 0;
}

