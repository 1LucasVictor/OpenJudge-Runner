#include<stdio.h>
#include<stdlib.h>

int main(){
  int x[100], i = 0;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      i--;
      x[i-1] = x[i] + x[i-1];
    } else if ( s[0] == '-' ){
      i--;
      x[i-1] = x[i-1] - x[i];
    } else if ( s[0] == '*' ){
      i--;
      x[i-1] = x[i] * x[i-1];
    } else {
      x[i] = atoi(s);
      i++;
    }
  }
  printf("%d\n", x[0]);

  return 0;
}

