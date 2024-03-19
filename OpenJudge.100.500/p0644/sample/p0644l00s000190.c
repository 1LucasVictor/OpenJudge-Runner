#include <stdio.h>

int main(void){

  char s1,s2,s3;
  scanf("%c%c%c", &s1, &s2, &s3);
  int answer = 0;
  if (s1 == '1') {
    answer++;
  }
  if (s2 == '1') {
    answer++;
  }
  if (s3 == '1') {
    answer++;
  }
  printf("%d\n", answer);

  return 0;
}