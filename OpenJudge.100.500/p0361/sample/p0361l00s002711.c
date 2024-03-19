#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,c,h,m,s;;
  char number[100];

  i = 0;
  while((c = getchar()) != EOF) {
    number[i] = c;
    i++;
  }
  s = atoi(number);
  
  h = s / 3600;
  s -= h * 3600;
  m = s / 60;
  s -= m * 60;
  printf("%d:%d:%d\n", h, m, s);

  return 0;
}