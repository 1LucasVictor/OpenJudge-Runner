#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int x[100], i = 0;
  char s[100];
  
  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      x[i-1] = x[i-1] + x[i];
      i--;
    }
    else if ( s[0] == '-' ){
      x[i-1] = x[i-1] - x[i];
      i--;
    }
    else if ( s[0] == '*' ){
      x[i-1] = x[i-1] * x[i];
      i--;    
    }
    else {
      i++;
      x[i] = atoi(s);
    }
  }
  printf("%d\n", x[i]);
  return 0;
}