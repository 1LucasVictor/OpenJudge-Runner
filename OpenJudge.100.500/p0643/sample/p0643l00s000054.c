#include <stdio.h>

int main(void) {
  FILE *fp;
  //fp = fopen("input/drken_001_02.txt", "r");
  fp = stdin;
  char line[1024];
  if(!fgets(line, 1024, fp)) return 0;
  int num1, num2;
  sscanf(line, "%d %d\n", &num1, &num2);
  int flag = (num1&1) && (num2&1);
  printf("%s\n", flag ? "Odd" : "Even");
  return 0;
}
